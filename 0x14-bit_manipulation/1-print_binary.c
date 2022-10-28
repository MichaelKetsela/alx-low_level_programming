#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int i;
for (i = 1 << 63; i > 0; i = i / 2)
(n & i) ? printf("1") : printf("0");
}
