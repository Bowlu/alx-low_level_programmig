#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
	unsigned long int sum, sum5, sum3;
	int i;

	sum = 0;
	sum5 = 0;
	sum3 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0)
			sum5 = sum5 + i;
		else if ((i % 3) == 0)
			sum3 = sum3 + i;
	}
	sum = sum5 + sum3;
	printf("%lu\n", sum);
	return (0);
}
