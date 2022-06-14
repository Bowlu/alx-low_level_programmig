#include "main.h"
#include <stdio.h>
/**
 * _strlen - function name
 * @s: character parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
