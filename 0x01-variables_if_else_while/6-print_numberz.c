#include <stdio.h>
/**
 * main - Entry point
 * Description: print all single digits of base ten starting from zero
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
