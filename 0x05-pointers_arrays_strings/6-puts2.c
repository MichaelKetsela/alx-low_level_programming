#include "main.h"

/**
* puts2 - prints every other character of a string
* starting with the first character
* followed by a new line
* @str: the string
* Return: Always 0.
*/
void puts2(char *str)
{
int i;
int len;
i = 0;
len = strlen(str) - 1;
while (i <= len)
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
