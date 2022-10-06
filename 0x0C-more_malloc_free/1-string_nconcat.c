#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int l;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	l = i + j;

	new = malloc(sizeof(char) * (l + 1));
	if (new == NULL)
		return (NULL);
	
	l = 0;

	for (p = 0; p < i; p++)
		new[k++] = s1[p];
	for (m = 0; m < j; m++)
		new[k++] = s2[m];

	new[k] = '\0';
	return (new);
}
