#include "main.h"
/**
* rot13 - encodes a string using rot13
*
* @c: the string to encode
*
* Return: the new string
*/

char *rot13(char *c)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 56; j++)
{
if (c[i] == a[j])
{
c[i] = b[j];
break;
}
}
}
return (c);
}
