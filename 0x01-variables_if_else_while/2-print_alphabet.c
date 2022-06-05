#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints alphabets in lower case
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
