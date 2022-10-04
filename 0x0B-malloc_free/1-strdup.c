#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}

	dup[j + 1] = 0;
	return (dup);
}
