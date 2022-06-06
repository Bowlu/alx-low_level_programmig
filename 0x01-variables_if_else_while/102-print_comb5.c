#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int o, p;
	int g, h, i, j;

	for (o = 0; o < 100; o++)
	{
		g = o / 10;
		h = o % 10;
		for (p = 0; p < 100; p++)
		{
			i = p / 10;
			j = p % 10;
			if (g < i || (g == i && h < j))
			{
				putchar(g + '0');
				putchar(h + '0');
				putchar(32);
				putchar(i + '0');
				putchar(j + '0');
				if (!(g == 9 && h == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
