#include "main.h"

/**
 * _memset - function name
 * @s: pointer
 * @b: constant byte
 * @n: third parameter
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}
