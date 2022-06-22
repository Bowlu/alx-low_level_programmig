#include "main.h"
#include <string.h>

/**
 * _strchr - function name
 * @s: pointer to char
 * @c: second parameter
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int b;

	while (1)
	{
		b = *s++;
		if (b == c)
		{
			return (s - 1);
		}
		if (b == 0)
		{
			return (NULL);
		}
	}
}
