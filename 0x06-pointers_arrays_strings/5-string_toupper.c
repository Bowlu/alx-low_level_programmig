#include "main.h"
/**
 * string_toupper - function
 * @u: parameter
 * Return: 0
 */
char *string_toupper(char *u)
{
	int l - 0;

	while (u[l])
	{
		if (u[l] >= 97 && u[l] <= 122)
		{
			u[l] = u[l] - 32;
			l++;
		}
	}
	return (u);
}
