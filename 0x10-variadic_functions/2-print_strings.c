#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ch;
unsigned int i;

va_start(ch , n);

for (i = 0; i < n; i++)
{
    if (va_arg(ch, char *) != NULL)
        printf("%s", va_arg(ch, char *));
    else
        printf("(nil)");

    if (i < n - 1 && separator != NULL)
        printf("%s", separator);
}
va_end(ch);
putchar('\n');
}
