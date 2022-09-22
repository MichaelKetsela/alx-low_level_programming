#include "main.h"

/**
* *cap_string - capitalizes all words of a string
* @c: string
* Separators of words: space, tabulation, new line, , , 
* ;, ., !, ?, ", (, ), {, and }
* Return: captal word
*/
char *cap_string(char *c)
{
int i ;
int j;
int k = strlen (c) -1;
char s[] = " \n\t,;.!?\"(){}";

if (c[0] >= 'a' && z[0] <= 'z')
z[0] -= 32;
for (i = 0; i <= k; i++)
{
for (j = 0; j < 14; j++)
{
if (c[i] == s[j])
{
if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] -= 32;
}
}
}
return (c);
}
