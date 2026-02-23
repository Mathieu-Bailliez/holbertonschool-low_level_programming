#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Taille d'un char : %zu byte(s)\n", sizeof(char));
	printf("Taille d'un int : %zu byte(s)\n", sizeof(int));
	printf("Taille d'un long int : %zu byte(s)\n", sizeof(long int));
	printf("Taille d'un long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Taille d'un float: %zu byte(s)\n", sizeof(float));

	return (0);
}
