#include "main.h"
#include <string.h>
/**
 * _strncpy - function name
 * @dest: first character argument
 * @src: second character argument
 * @n: integer
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (0);
}
