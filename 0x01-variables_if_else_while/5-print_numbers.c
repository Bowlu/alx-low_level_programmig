#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: single digit numbers of base ten
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
