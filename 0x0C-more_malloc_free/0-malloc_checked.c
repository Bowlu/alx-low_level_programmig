#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: integer parameter
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if (p == NULL)
	{
		exit(98);
	}
	p = malloc(b * sizeof(int));
	return (p);
}
