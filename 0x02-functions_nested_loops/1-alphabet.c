#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * and at the end their is new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a;

for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
