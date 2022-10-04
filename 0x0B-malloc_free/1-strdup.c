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
dup = malloc(sizeof(str) * (strlen(str) - 2));
if (str == NULL)
return (NULL);

if (dup == NULL)
return (NULL);

dup = strdup(str);
return (dup);
}
