#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all the alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void) 
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
