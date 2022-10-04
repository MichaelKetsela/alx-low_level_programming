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
if (str == NULL)
return (NULL);

dup = malloc(sizeof(char) * strlen(str));

if (dup == NULL)
return (NULL);
free(dup);
dup = strdup(str);
return (dup);
}
