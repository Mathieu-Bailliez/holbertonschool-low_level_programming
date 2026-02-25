#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, Last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Last_digit_of = (n % 10);

	printf("Last digit of %d is %d ", n, Last_digit_of);

	if (Last_digit_of > 5)
		printf("and is greater than 5\n");
	if (Last_digit_of == 0)
		printf("and is 0 \n");
	if (Last_digit_of < 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
