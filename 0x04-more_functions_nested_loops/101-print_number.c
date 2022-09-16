#include "main.h"

/**
* print_number - prints an integer
* You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values
* @n: the int
* Return: Always 0.
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
