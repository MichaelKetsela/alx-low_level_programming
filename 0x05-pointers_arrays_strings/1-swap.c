#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(b, a);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
