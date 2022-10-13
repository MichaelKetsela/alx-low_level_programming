#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: the numbers of arguments being passed through
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
if (n == 0)
  return(0);
va_start(ap, n);
for(i = n; i >= 0; i = va_arg(ap, n))
{ 
  sum += va_arg(ap, n);
}
va_end(ap);
return (sum);
}
