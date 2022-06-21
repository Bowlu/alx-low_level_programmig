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
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
