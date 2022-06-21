#include "main.h"
/**
 * print_last_digit - this prints the last digit
 * @n: the integer parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;

	while (n < 0)
		n = -n;
	
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
