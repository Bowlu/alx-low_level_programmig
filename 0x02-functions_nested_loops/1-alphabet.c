#include "main.h"
/**
 * main - print alphabets
 *
 * Description: print all the alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int h;

	for (h = 'a'; h <= 'z'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');	
}
