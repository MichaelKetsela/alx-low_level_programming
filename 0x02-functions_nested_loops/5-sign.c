#include "main.h"

/**
* print_sign - Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
* @n: is char
* Return: Always 0.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);
}
if (n > 0)
{
_putchar(45);
return (-1);
}
}
