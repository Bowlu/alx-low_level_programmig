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
	int a = 1;
	int b = 0;

	while (str[a])
		a++;
	n = malloc(a * sizeof(char) + 1);
	free(n);

	if (n == NULL)
		return (NULL);
	else if (str == NULL)
		return (NULL);
	while (b < a)
	{
		n[b] = str[b];
		b++;
	}
	n[b] = '\0';
	return (n);
}
