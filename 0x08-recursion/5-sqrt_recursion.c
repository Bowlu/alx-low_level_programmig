#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - function name
 * @n: parameter
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function name
 * @num: first parameter
 * @i: second parameter
 * Return: square of a number
 */
int _sqrt(int num, int i)
{
	int sqr = i * i;

	if (sqr > 1)
	{
		return (-1);
	}
	if (sqr == num)
	{
		return (i);
	}
	return (_sqrt(num, i + 1));
}
