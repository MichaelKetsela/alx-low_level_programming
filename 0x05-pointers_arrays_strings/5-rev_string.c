#include "main.h"

/**
* rev_string - prints a string, in reverse
* @s: is the string
* Return: Always 0.
*/
void rev_string(char *s)
{
int l = strlen(s);
/*strlen calculates the length of a given string*/
int i = l - 1;
while (i >= 0)
{
printf("%c", s[i]);
i--;
}
printf("\n");
}
