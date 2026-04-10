#include "main.h"

/**
 * _is_prime_helper - Helper to check if a number is prime recursively
 *
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if n is prime, 0 otherwise
 *
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_is_prime_helper(n, 2));
}
