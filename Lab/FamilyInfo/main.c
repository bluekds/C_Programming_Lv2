#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define FATHER 0
#define MOTHER 1
#define MAX_NUM_CHILDREN 3

#define clearStdin {getchar();}
#define errCheck(func) if(func == -1){printf("Error!\n"); return 0;}

struct member {
	char name[16];
	unsigned int age : 8 ;			 // 0~255
	unsigned int num_children : 2;	 // 0~3
	struct member* spouse;
	struct member* children[MAX_NUM_CHILDREN];
};

int printMemberInfo(const struct member* _member);
int setMember(struct member* _dest, char* _name, unsigned int _age
	, struct member* _spouse, struct member* _children, unsigned int _numChildren);

int main(void) {
	struct member familyMember[2 + MAX_NUM_CHILDREN] = { 0 };

	int numChildren = 0;

	int age = 0;
	int numChild = 0;
	char buf[255] = { 0 };

	printf("Enter the father's name: ");	gets(buf);
	printf("Enter the father's age: ");		scanf("%d", &age);
	printf("How many children he have? ");	scanf("%d", &numChild); clearStdin;
	errCheck(setMember(&familyMember[FATHER], buf, age, &familyMember[MOTHER], &familyMember[2], numChild));

	printf("What is the mother's name? "); gets(buf);
	printf("What is the mother's age: ");  scanf("%d", &age); clearStdin;
	errCheck(setMember(&familyMember[MOTHER], buf, age, &familyMember[FATHER], &familyMember[2], numChild));

	for (int i = 0; i < numChild; i++) {
		printf("Enter the name of child-%d: ", i+1);	gets(buf);
		printf("Enter the age of child-%d: ", i + 1);	scanf("%d", &age); clearStdin;
		errCheck(setMember(&familyMember[2 + i], buf, age, NULL, NULL, 0));
		//printMemberInfo(&familyMember[2 + i]);
	}

	while (strcmp(buf, "-1")) {
		printf("Select father or mother (exit: -1) : "); gets(buf);
		if (!strcmp(buf, "father")) {
			// fater
			printMemberInfo(&familyMember[FATHER]);
		}
		else if (!strcmp(buf, "mother")) {
			// mother
			printMemberInfo(&familyMember[MOTHER]);
		}
	}

	printMemberInfo(&familyMember[FATHER]);
	printMemberInfo(&familyMember[MOTHER]);
	return 0;
}

int printMemberInfo(const struct member* _member)
{
	printf("Name: %s, Age: %d\n", _member->name, _member->age);
	if (_member->spouse == NULL)
		return 0;
	printf("%s's spouse is %s\n", _member->name, _member->spouse->name);
	if (_member->num_children > 0) {
		printf("They have %d children -", _member->num_children);
		for (int i = 0; i < _member->num_children; i++)
			printf(" %s", _member->children[i]->name);
		printf("\n");
	}
	return 0;
}

int setMember(struct member* _dest, char* _name, unsigned int _age
	, struct member* _spouse, struct member* _children, unsigned int _numChildren)
{
	if (_name == NULL) return -1;
	strcpy(_dest->name, _name);

	if (_age > 255) return -1;
	_dest->age = _age;

	_dest->spouse = _spouse;
	if (_numChildren > MAX_NUM_CHILDREN) return -1;
	_dest->num_children = _numChildren;

	int i = 0;
	for (; i < _numChildren; i++) {
		_dest->children[i] = (_children + i);
	}
	for (; i < MAX_NUM_CHILDREN; i++)
		_dest->children[i] = NULL;

	return 0;
}