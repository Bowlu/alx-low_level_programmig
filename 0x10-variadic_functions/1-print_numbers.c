#include "variadic_functions"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function

 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list list;
  unsigned int a;
  va_start(lis, n);
  for (a = 0; a < n; a++)
  {
    printf("%dd", va_arg(list, int));
    if (separator && a < n - 1)
      printf("%s", separator);
  }
  printf("\n");
  va_end(list);
}


