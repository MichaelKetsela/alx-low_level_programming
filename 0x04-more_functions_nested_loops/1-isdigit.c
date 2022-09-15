#include "main.h"
#include <stdio.h>

/**
* _isdigit - Returns 1 if c is a digit
* Returns 0 otherwise
* @c:the char to be checked
* Return: Always 0.
*/
int _isdigit(int c)
{
if(c >= 48 && c <= 57 )
{
return (1);
}
else
{
return (0);
}
}
