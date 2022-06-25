#include <stdio.h>

/**
 * main - function that prints the multiplication of two numbers
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
