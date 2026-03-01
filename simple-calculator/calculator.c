#include <stdio.h>

/**
 * main - ask user for 2 number a 1 operator
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	char op;

	printf("Premier nombre : ");
	scanf("%d", &a);

	printf("Operateur (+ - * /) : ");
	scanf(" %c", &op);

	printf("Deuxieme nombre : ");
	scanf("%d", &b);

	if (op == '+')
		printf("Resultat : %d\n", a + b);
	else if (op == '-')
		printf("Resultat : %d\n", a - b);
	else if (op == '*')
		printf("Resultat : %d\n", a * b);
	else if (op == '/')
		printf("Resultat : %d\n", a / b);
	else
		printf("Operateur invalide\n");

	return (0);
}
