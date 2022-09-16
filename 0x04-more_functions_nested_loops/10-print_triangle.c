#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line. 
* @size:the size of the triangle
* If size is 0 or less, the function should print only a new line
* Use the character # to print the triangle
* Return: Always 0.
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
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
