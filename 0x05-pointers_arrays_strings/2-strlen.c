#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - function name
 * @s: character parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
