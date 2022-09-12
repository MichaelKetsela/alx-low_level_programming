#include <stdio.h>
/**
 * main - entry point
 * Description :'print all possible combinations of 3 digits '
 * Return: always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
