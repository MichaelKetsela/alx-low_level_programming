#include <stdio.h>
/**
 * main - entry point
 * Description:'print lowercase alphabet'
 * Return: always 0
 */
int main(void)
{
	int lc;

	for (lc = 122; lc >= 97; lc--)
	{
		putchar(lc);
	}
	putchar(10);
	return (0);
}
