#include "main.h"

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @c: the string
* Return: uppercase letters
*/

char *string_toupper(char *c)
{
int j = strlen(c) - 1;
int i;
for(i = 0; i <= j; i++)
{
if (c[i] >= 97 && c[i] <= 122)
c[i] -= 32;
}
return (c);
}
