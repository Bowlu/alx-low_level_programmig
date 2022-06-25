#include <stdio.h>

/**
 * main - function that prints the sum ob positive numbers
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, addNum, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b =1; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		addNum += num;
	}
	printf("%d\n", addNum);
	return (0);
}


