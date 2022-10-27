#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
if(n > 1)
print_binary(n / 2);
  
printf("%d", n % 2);
}
