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
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	new = malloc(sizeof(char) * (l + 1));

	if (new == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		new[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new[l++] = s2[i];

	new[l] = '\0';

	return (new);
}
