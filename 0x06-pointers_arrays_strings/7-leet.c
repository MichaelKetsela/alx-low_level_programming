#include "main.h"
/**
 * leet - replaces a bunch of numbers with letters
 *
 * @c: the string to look at
 *
 * Return: the new string
 */

char *leet(char *c)
{
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char r[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
				c[i] = r[j / 2];
		}
	}
	return (c);
}
