#include <stdio.h>

/**
 * main - ask user for 2 number a 1 operator
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int choice = -1;

	printf("Simple Calculator\n");

	while (choice != 0)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("Bye!\n");
		}
	}

	return (0);
}
