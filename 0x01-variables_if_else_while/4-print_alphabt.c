#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int lowerc = 'a';

	while (lowerc <= 'z')
	{
		if (lowerc == 'e' || lowerc == 'q')
		{
			lowerc++;
		}
		else
		{
			putchar(lowerc);
			lowerc++;
		}
	}
	putchar('\n');
	return (0);
}
