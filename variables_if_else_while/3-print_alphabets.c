#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, C;

	c = 97;
	C = 65;

	while (c <= 122 && C <= 90)
	{
		putchar(c);
		c++;
		putchar(C);
		C++;
	}
	putchar('\n');

return (0);
}
