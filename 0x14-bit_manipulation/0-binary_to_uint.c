#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
int c;
unsigned int len;

len = strlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
return (0);

if (b[c] == '1')
{
i += k;
}
k *= 2;
}
return (i);
}
