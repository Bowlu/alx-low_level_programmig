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
	int a;
	int b = 0;

	while (a = 1)
	{
		str[a];
		a++;
	}
	n = malloc(sizeof(char));

	free(n);

	if (str == NULL)
	       return (NULL);
	else if (n == NULL)
		return (NULL);
	while (b < a)
	{
		n[b] = str[b];
		b++;
		
	}
	n[b] = '\0';
	return (n);	
}	
