#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num;
int i, c = 0;
num = n ^ m;
for (i = 63; i >= 0 ; i--)
{
if ((num >> i) & 1)
c++;
}
return (c);
}
