#include "main.h"

/**
 * _strspn - function name
 * @s: first parameter
 * @accept: second parameter
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}

