#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcpy - pointer
 * @dest: first pointer
 * @src: second pointer
 * Return: value of the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
