#include "main.h"

/**
* *cap_string - capitalizes all words of a string
* @c: string
* Separators of words: space, tabulation, new line, , , 
* ;, ., !, ?, ", (, ), {, and }
* Return: captal word
*/
char *cap_string(char *z)
{
int i;
int j;
char s[] = " \n\t,;.!?\"(){}";

if (z[0] >= 'a' && z[0] <= 'z')
z[0] -= 32;

for (i = 0; z[i] != '\0'; i++)
{
for (j = 0; j < 14; j++)
{
if (z[i] != s[j])
{
if (z[i + 1] >= 'a' && z[i + 1] <= 'z')
z[i + 1] -= 32;
}
else 
{
z[i] = s[j];
}
}
}
return (z);
}
