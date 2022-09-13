#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer
* @r: an int
* Return: Always 0.
*/
int _abs(int r)
{
if (r < 0)
{
return (r * -1);
}
else
{
return (r);
}
}
