#include <stdio.h>
/**
 * main - entry point
 * Description:'print all possibel combnation of two digits'
 * Return: always 0
 */
int main(void)
{
	int n, nt;

	for (n = 48; n <= 56; n++)
	{
		for (nt = n + 1; nt <= 57; nt++)
		{
			putchar(n);
			putchar(nt);
			if (n != 56 || nt != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
