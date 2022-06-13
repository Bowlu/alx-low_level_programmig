#include "main.h"
/**
 * times_table - function name
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 10; c++)
		{
			a = b * c;
			if (b == 0)
				_putchar(a + '0');
			if (b != 0 && a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
