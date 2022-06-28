#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new string duplicated
 * @str: string 
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *n;

	n = malloc(sizeof(char));
	*n = *str;

	free(n);

	if (str == NULL)
	       return (NULL);
	else
		return (n);
}	
