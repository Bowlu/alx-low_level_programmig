#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: print alphabet in lower case then upper case
 * Return: 0
 */
int main(void)
{
	int lowerc = 'a';
	int upperc = 'A';

	while (lowerc <= 'z')
	{
		putchar(lowerc);
		lowerc++;
	}
	putchar('\n');
	return (0);
}
