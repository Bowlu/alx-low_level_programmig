#include "main.h"
#include <stdio.h>

/**
 * _strchr - pointer function name
 * @s: pointer
 * @c: second parameter
 * Return: a pointer to the first occurence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	char a;
	char p;

	while (s[a])
	{
		a++;
	}
	for (p = 0, p < a; p++)
	{
		if (c == s[p])
		{
			s += p;
		}
		return (s);
	}
	return ('\0');
}
