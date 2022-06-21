#include "main.h"

/**
 * _abs - function name that computes the absolute value of an integer
 * @n: integer parameter
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
