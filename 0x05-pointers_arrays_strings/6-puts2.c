#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - function name
 * @str: parameter
 * Return: 0
 */

void puts2(char *str)
{
	int bet;
	int i;

	bet = strlen(str);

	for (i = 0; i < bet; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
