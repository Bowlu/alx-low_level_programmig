#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocated memory for an array
 * @nmemb: first parameter
 * @size: second parameter
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *value;
	unsigned int result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	value = mem;
	for (result = 0; result < (size * nmemb); result++)
	{
		value[result] = '\0';
	}
	return (mem);
}
