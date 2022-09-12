#include <stdio.h>
/**
 * main - entry point
 * Describtion:'print all combinations of two two-digit number'
 * Return: always 0
 */
int main(void)
{
	int n, t;

	for (n = 0; n <= 98; n++)
	{
		for (t = c + 1; t <= 99; t++)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
			putchar(32);
			putchar('0' + t / 10);
			putchar('0' + t % 10);
			if (n / 10 != 9 || n % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
