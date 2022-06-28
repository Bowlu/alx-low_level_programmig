#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that returns a pointer to two concatenated strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = a + b;
	n = malloc(c * sizeof(char) + 1);
	b = 0;
	if (n == NULL)
		return (NULL);
	free(n);
	while (d < c)
	{
		if (d < a)
		{
			n[d] = s1[d];
		}
		if (d >= a)
		{
			n[d] = s2[b];
			b++;
		}
		d++;
	}
	n[d] = '\0';
	return (n);
}
