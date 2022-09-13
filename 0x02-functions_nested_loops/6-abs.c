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
r*=-1;
printf("%d\n", r);
}
else
{
printf("%d\n", r);
}
return (0);
}
