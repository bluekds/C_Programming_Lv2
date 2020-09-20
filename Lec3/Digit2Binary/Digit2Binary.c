#include <stdio.h>

void print_binary(int x);
void print_binary_reverse(int x);

int main(void)
{
	int x = 0;
	printf("Enter a number: ");
	scanf_s("%d", &x);
	print_binary(x);
	printf("\n");
	print_binary_reverse(x);
}

void print_binary(int x)
{
	if (x > 0)
	{
		print_binary(x / 2); // Recursive call
		printf("%d", x % 2); // Print the reminder
	}
}

void print_binary_reverse(int x)
{
	if (x > 0)
	{
		printf("%d", x % 2); // Print the reminder first
		print_binary_reverse(x / 2); // Recursive call
	}
}