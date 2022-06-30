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

	p = malloc(b * sizeof(int));
	free(p);
	return (p);

	if (p == NULL)
	{
		exit(98);
	}
}
