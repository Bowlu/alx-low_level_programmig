#include "main.h"
#include <stdio.h>
/**
 * _puts - function name
 * @str: parameter
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
	
}
