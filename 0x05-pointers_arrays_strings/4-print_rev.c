#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: is the string
* Return: Always 0.
*/
void print_rev(char *s)
{
int l = strlen(s);
/*strlen calculates the length of a given string*/
int i = l - 1;
while (i >= 0)
{
printf("%c ", s[i]);
i--;
}
}
