#include <stdio.h>
/**
 * main - entry point
 * Description:'print single digit numbers of base 10 starting from 0'
 * Return: always 0
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	putchar(10);
	return (0);
}
