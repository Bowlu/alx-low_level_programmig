#include "main.h"
/**
 * _strcat - function name
 * @dest: first character
 * @src: second character
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int cat = 0;
	int i;

	while (dest[cat])
		cat++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[cat] = src[i];
		cat += 1;
	}
	dest[cat] = '\0';
	return (dest);
}
