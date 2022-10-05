#include "main.h"
/**
* _puts -  prints a string followed by a new line to stdout
* @str: the string
* Return: Always 0.
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
