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
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num != (num - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
