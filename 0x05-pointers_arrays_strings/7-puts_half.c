#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: the string
* Return: Always 0.
*/
void puts_half(char *str)
{
int n;
int len;
n = (strlen(str) - 1) / 2;
len = strlen(str) - 1;
while (n <= len)
{
printf("%c", str[n]);
i++;
}
printf("\n");
}