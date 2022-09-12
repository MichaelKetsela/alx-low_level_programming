#include <stdio.h>
/**
 * main - entry point
 * Description : 'print all possible combination of single-digit numbers'
 * Return: always 0
 */
int main(void)
{
	int sd;

	for (sd = 48; sd <= 57; sd++)
	{
		putchar(sd);
		if (sd <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
