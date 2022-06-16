#include "main.h"
#include <string.h>
/**
 * _strncat -function 
 * @dest: first character argument
 * @src: second character argument
 * @n: integer
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
