#include "main.h"
#include <stdlib.h>

/**
 * create_array - function name which is a pointer to char
 * @size: first argument
 * @c: second argument
 * Return: NULL if size = 0 or a pointer to the array if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
