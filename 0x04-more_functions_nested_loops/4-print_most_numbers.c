#include "main.h"

/**
* print_numbers - prints the numbers from 0 to 9
* followed by a new line.
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
char n;
for (n = '0' ; n <= '9' ; n++)
{
if (n == '2' || n == '4')
{
break;
}
else
_putchar(n);
}
_putchar('\n');
}
