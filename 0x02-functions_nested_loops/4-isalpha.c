#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: a character parameter
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
