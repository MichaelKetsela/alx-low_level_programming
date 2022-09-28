#include "main.h"

/**
 * helper - Finds the square root of two numbers
 *
 * @n: The number
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
return (square(i, ++j))

return (1);
}
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (square(n, 1));
}
