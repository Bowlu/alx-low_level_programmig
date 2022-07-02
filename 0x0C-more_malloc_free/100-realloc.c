#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: parameter 1
 * @new_size: parameter 2
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy;
	char *b;
	void *p;
	unsigned int result;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	p = malloc(sizeof(*copy) * new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	b = p;

	for (result = 0; result < old_size && result < new_size; result++)
		b[result] = *copy++;
	free(ptr);
	return (p);
}

