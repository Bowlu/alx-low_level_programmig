#include <stdio.h>
/**
 * main - Entry point
 * Description: print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char n;
	int r;

	for (r = 0; r < 10; r++)
	{
		putchar(r + '0');
	}

	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
