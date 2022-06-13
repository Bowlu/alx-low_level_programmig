#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int a, b, c, num;

	b = 1;
	c = 2;

	for (a = 0; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		num = b + c;
		b = c;
		c = num;
	}
	return (0);
}
