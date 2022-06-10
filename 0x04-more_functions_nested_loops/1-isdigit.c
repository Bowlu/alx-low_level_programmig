#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function for a digit
 *
 * @c: this is the character parameter
 * Return: 1 if c is a digit and 0 if it is otherwise
 */

int _isdigit(int c)
{
	if (c < 10 && c != 'a' || c != 'A')
		return (1);
	else
		return (0);
}
