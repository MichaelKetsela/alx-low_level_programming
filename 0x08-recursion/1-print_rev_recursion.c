#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string to reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
int j = strlen(s);
int i = 0;
if (i < j)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
