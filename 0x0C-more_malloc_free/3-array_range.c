#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: first parameter
 * @max: second parameter
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *a;
	int lenA;
	int result;

	if (min > max)
	{
		return (NULL);
	}
	lenA = max - min + 1;
	a = malloc(sizeof(int) * lenA);

	if (a == NULL)
	{
		return (NULL);
	}
	for (result = 0; result < lenA; result++)
	{
		a[result] = min++;
	}
	return (a);
}
