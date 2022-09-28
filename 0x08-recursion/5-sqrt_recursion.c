#include "main.h"

/**
 * square - Finds the square root of two numbers
 * 
 * @i: The squared number
 * @j: The square root
 * Return: square root
 */
int square(int i, int j)
{
if (j * j > i)
return (-1);

else if (j * j == i)
return (j);

else
return (square(i, ++j));

return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (square(n, 1));
}
