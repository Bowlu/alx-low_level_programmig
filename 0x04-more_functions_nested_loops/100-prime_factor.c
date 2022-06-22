#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int num;
	long int a;
	long int total;

	num = 612852475143;
	total = -1;
	while (num % 2 == 0)
	{
		total = 2;
		num /= 2;
	}
	for (a = 3; a <= sqrt(num); a = a + 2)
	{
		while (num % a == 0)
		{
			total = a;
			num = num / a;
		}
	}
	if (num > 2)
		total = num;
	printf("%ld\n", total);

	return (0);
}
