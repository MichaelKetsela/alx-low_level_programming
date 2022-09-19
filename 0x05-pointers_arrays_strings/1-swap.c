#include "main.h"

/**
* swap_int -  swaps the values of two integers
* @a:the frist int
* @b:the second int
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
printf("a=%d, b=%d\n", *a, *b);
}
