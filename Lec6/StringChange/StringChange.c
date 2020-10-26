#include <stdio.h>
int StringChange(char string[], int _maxLen, char* _newString, int _from);

int main(int argc, int* argv[]){
	char str[6] = "Hello";
	printf("%s\n", str);

	StringChange(str, 5, "y!", 2);
	printf("%s\n", str);

	StringChange(str, 5, "C Language", 0);
	printf("%s\n", str);

	return 0;
}

int StringChange(char string[], int _maxLen, char* _newString, int _from) {
	int i = 0;
	while (_newString[i] != '\0' && _from + i < _maxLen) {
		string[_from + i] = _newString[i];
		i++;
	}
	string[_from + i] = '\0';
	return i;
}