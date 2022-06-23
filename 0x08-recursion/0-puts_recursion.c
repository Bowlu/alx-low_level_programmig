#include "main.h"

/**
 * _puts_recursion - function name
 * @s: pointer to char
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
