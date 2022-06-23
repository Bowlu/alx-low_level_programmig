#include "main.h"

/**
 * factorial - function name
 * @n: integer parameter
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
		return (n * factorial(n - 1));
	}
}
