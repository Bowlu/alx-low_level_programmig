#include "main.h"
/**
 * jack_bauer - function name 
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a;
	int h;
	for (h = 0; h < 24; h++)
	{
		for (a = 0; a < 60; a++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			if (a < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(':');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
