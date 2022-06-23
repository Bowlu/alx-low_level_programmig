#include "main.h"

int prime(int, int);

/**
 * is_prime_number - function name
 * @n: parameter
 * Return: a prime number
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - function name
 * @n: first parameter
 * @i: second parameter
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < 1)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
