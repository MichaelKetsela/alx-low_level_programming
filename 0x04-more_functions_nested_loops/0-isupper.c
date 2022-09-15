#include "main.h"
#include <stdio.h>

/**
* _isupper - Returns 1 if c is uppercase
* Returns 0 otherwise
* @c: char to checked
* Return: Always 0.
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
