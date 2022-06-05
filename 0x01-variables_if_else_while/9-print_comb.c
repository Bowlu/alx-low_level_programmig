#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int r = 0;

	while (r < 10)
	{
		putchar(r + '0');
		if (r < 9)
		{
			putchar(44);
			putchar(32);
		}
		r++;
	}
	putchar('\n');
	return (0);
}
