#include "main.h"
#include <sting.h>
/**
 * puts_half - function name
 * @str: parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int first;
	int second;
	int i;

	first = strlen(str);
	if (first % 2 == 1)
	{
		second = first / 2 + 1;
	}
	else
	{
		second = first / 2;
	}
	for (i = second; i < first; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
