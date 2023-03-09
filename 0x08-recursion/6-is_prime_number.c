#include "main.h"

/**
 * is_prime_number - checks if n is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (is_prime_number_check(n, 2));
}

/**
 * is_prime_number_check - checks if n is a prime number
 * @n: number to check
 * @i: number to recurse
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number_check(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n / 2)
		return (1);
	return (is_prime_number_check(n, i + 1));
}
