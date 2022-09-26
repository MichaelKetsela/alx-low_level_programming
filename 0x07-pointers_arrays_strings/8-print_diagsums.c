#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i];
}
printf("%d ", sum1);
}
