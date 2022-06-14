#include "main.h"
#include <string.h>
/**
 * puts2 - function name
 * @str: parameter
 * Return: 0
 */

void puts2(char *str)
{
	int bet;
	bet = strlen(str);

	for (i = 0; i < bet; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
