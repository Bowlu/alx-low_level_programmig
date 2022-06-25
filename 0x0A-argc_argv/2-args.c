#include <stdio.h>

/**
 * main - function that prints all the argument it receives
 * @argc: the argument count
 * @argv: array of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
