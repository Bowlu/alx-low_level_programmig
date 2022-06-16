#include "main.h"
#include <stdio.h>
/**
 * print_array - function name
 * @a: first integer
 * @n: second integer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int numbers = *a;
	*a = n;

	for (int i = n; i < 5; i++;)
	{
		putchar(numbers + i);
		putchar(',');
	}
	putchar('\n');
}
