#include "main.h"
/**
 * print_diagonal - function name for drawing a diagonal line
 * @n: number of times '\' should be printed
 *
 */
void print_diagonal(int n)
{
	int a;

	for (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
