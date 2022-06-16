#include "main.h"
/**
 * cap_string - function
 * @c: parameter
 * Return: string in capital letters
 */

char *cap_string(char *c)
{
	char cap[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int length = 13;
	int d = 0;
	int i;

	while (c[d])
	{
		i = 0;
		while (i < length)
		{
			if ((d == 0 || s[d - 1] == cap[i]) && (s[d] >= 97 && s[d] <= 122))
			{
				s[d] = s[d] - 32;
			}
			i++;
		}
		d++;
	}
	return (c);
}
