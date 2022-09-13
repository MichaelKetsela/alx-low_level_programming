#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
* @x:factor
* @y: count
* @z:computed
* Return: Always 0
*/
void times_table(void)
{
	int x = 0; /* factor */
	int y; /* count  */
	int z; /* computed value */

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
	
}
