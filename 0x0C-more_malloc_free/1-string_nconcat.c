#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that returns a pointer to a new string 
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: integer parameter
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *length;
	unsigned int a = n;
	unsigned int result;

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";

	for (result = 0; s1[result]; result++)
	{
		a++;
	}
	length = malloc(sizeof(char) * (a + 1));

	if (length == NULL)
		return (NULL);

	a = 0;
	for (result = 0; s1[result]; result++)
	{
		length[a++] = s1[result];
	}
	for (result = 0; s2[result] && result < n; result++)
	{
		length[a++] = s2[result];
	}
	length[a] = '\0';
	return (length);
}
