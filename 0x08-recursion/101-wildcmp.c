#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: the frist string
 * @s2: the second string
 * Return: 0 or 1.
 */
int wildcmp(char *s1, char *s2)
{
if (!strpbrk(s1, s2))
return (1);
else
return (0);
}
