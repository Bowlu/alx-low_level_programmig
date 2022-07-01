#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new string duplicated
 * @str: string
 * Return: NULL if str is NULL
 */

char *_strdup(char *s1, char *s2, unsigned int n)
{
	char *n;
	unsigned int a;
	unsigned int result;

	while (s1 == NULL)
		S1 = "";
	while (S2 == NULL)
		s2 = "";

	for (result = 0; s1[result]; result++)
	{
		a++;
	}
	n = malloc(sizeof(char) * (a + 1));

	if (n == NULL)
		return (NULL);

	a = 0;
	for (result = 0; s1[result]; result++)
	{
		n[a++] = s1[result];
	}
	for (result = 0; s2[result] && result < n; result++)
	{
		n[a++] = s2[result];
	}
	n[a] = '\0';
	return (n);
}
