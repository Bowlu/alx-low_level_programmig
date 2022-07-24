#include "main.h"
int _pow(int a, int b);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: decimal/int equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	int size = 0;
	int value;
	int i = 0;
	int myInt = 0;

	
	while (b[i])
	{
		size++;
		i++;
	}
	value = size - 1;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			myInt = myInt + ((b[i] - '0') * _pow(2, value));
			value--;
		} else
		{
			return (0);
		}
		i++;
	}

	return (myInt);
}

/**
 * _pow - calculates a to power b (a^b)
 * @a: base parameter
 * @b: power parameter
 *
 * Return: value
 */

int _pow(int a, int b)
{
	int val = 1;

	while (b)
	{
		val = val * a;
		b--;
	}
	return (val);
}
