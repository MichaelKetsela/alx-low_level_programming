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
int j = strlen(c) - 1;
int i;
for (i = 0; i <= j; i++)
{
if (c[i] >= 97 && c[i] <= 122)
c[i] -= 32;
}
return (c);
}
