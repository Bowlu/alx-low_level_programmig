#include "main.h"

/**
 * _strpbrk - function name
 * @s: first parameter
 * @accept: second parameter
 * Return:  a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int k;

	while (s[j])
	{
		k = 0;
		while (accept[k])
		{
			if (s[j] == accept[k])
			{
				s += j;
				return (s);
			}
			k++;
		}
		j++;
	}
	return ('\0');
}
