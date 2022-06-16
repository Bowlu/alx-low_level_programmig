#include "main.h"
/**
 * reverse_array - function name
 * @a: first argument
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int *b;
	int c;
	int d;
	int i;

	b = a;
	for (i = 0; i < n; i++)
	{
		b++;
	}
	for (c = 0; c <= n / 2; c++)
	{
		d = a[c];
		a[c] = *b;
		*b = d;
		b--;
	}
	return (0);
}
