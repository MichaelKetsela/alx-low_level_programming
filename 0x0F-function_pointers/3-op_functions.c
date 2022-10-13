#include "3-calc.h"

/**
 * op_add - add
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtract
 * @a: first int
 * @b: second int
 * Return: difference
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplies
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divides
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - remainder
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
