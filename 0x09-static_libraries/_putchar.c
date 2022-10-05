#include "main.h"

/**
*unistd.h - standard symbolic constants and types
* _putchar - writes the character c to stdout
* at c: The character to print
* If you want to print new line on each output use c = '\n'; write(1,&c,1); at the end of the function
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
