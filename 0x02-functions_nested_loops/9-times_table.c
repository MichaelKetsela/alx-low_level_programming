#include "main.h"
#include <stdio.h>

/**
* times_table - prints the 9 times table, starting with 0
*
* Return: Always 0
*/

void times_table(void)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
