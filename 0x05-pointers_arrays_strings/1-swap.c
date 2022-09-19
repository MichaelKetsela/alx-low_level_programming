#include "main.h"

/**
* swap_int -  swaps the values of two integers
*
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c;
*a = 98;
*b = 42;
printf("a=%d, b=%d\n", *a, *b);
c = *a;
*a = *b;
*b = c;
swap_int(int *a , int *b);
}
