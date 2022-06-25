#include <stdio.h>

/**
 * main - function that prints the sum ob positive numbers
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, addNum, a;

	addNum += num;

	if (argc == 1)
		printf("0\n");

	for (a = 1; a < argc; a++)
	{
		if (argv[a] > '9' || argv[a] < '0')
		{
			printf("Error\n");
			return (1);
		}
	}
}
