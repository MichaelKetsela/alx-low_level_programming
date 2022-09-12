#include <stdio.h>
/**
 * main - entry point
 *
 * Description:'prints the alphabet in lowercase'
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
