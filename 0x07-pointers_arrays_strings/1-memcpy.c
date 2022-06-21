#include "main.h"

/**
 * _memcpy - function name
 * @dest: first pointer
 * @src: second pointer
 * @n: third parameter
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char a;
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		src[p] = a;
		dest = src;
	}
	return (dest);
}
