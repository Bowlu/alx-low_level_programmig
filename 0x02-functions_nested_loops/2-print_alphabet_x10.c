#include "main.h"
/**
 * main - prints alphabets
 * Description: prints 10x the alphabet in lower case
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
