<<<<<<< HEAD
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
=======
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
>>>>>>> fe72c2aac33b714b3ffbe86c24f87b14d2ae5786
