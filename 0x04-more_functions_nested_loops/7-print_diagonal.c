#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the number of times the character \ should be printed
* The diagonal should end with a \n
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i;
if (n>0)
{
for (i = 1; i <= n ; i++)
{
for(j = i; j > 0; j--)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
