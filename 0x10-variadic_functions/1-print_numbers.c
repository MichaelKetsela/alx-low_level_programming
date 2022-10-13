#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list sep;
unsigned int i;

if (separator == NULL)
exit(98);

va_start (sep, n);

for(i = 0; i < n; i++)
{
  printf("%d", va_arg(sep , int));
  if (i < n -1)
    printf("%s", separator)
}
va_end(sep);
putchar('\n');
}
