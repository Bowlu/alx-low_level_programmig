#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that returns a pointer to a newly allocated memory
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: integer parameter
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int a = 0;
	int b = 0;
	int c = 0;

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	c = a + b;
	p = malloc(c * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	if (n >= strlen(s1)
