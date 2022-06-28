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
	char c;
	unsigned int i;

	s = (char*)malloc(c * sizeof(char));

	if (i = 0)
		_putchar('\0');
	else if (i == NULL)
		free(s);
	return(s);
}
