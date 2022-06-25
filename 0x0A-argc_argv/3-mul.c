#include <stdio.h>

/**
 * main - function that prints the multiplication of two numbers
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int mul;
	int num1, num2;

	mul = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", mul);
	return (0);
}
