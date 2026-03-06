#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;

	while(1)
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
			break;
		}
		else if (choice == 1)
		{
			/* addition ici */
		}
		else if (choice == 2)
		{
			/* soustraction ici */
		}
		else if (choice == 3)
		{
			/* Multiplication ici */
		}
		else if (choice == 4)
		{
			/* Division ici */
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
