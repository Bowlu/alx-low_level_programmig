#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints minimum number of a coin
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num;
	int a;
	int addNum = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5; && num >= 0; a++)
	{
		while (num >= cents[a])
		{
			num -= cents[a];
			addNum++;
		}
	}
	printf("%d\n", addNum);
	return (0);
}
