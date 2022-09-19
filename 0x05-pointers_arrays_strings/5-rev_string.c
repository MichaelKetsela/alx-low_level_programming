#include "main.h"

/**
* rev_string - prints a string, in reverse
* @s: is the string
* Return: Always 0.
*/

void rev_string(char *s)
{
int i;
int len;
char newStr;
i = 0;
len = strlen(s) - 1;
while (len >= i)
{
newStr = s[len];
s[len] = s[i];
s[i] = newStr;
len--;
i++;
}
}
