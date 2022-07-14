#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that returns the index of the first element
 * @array: parameter
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
