#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: is the size of the square
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square
* Return: Always 0.
*/

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size ; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
