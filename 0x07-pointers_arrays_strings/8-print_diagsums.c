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
int i = 0;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i][i];
sum2 = sum2 + a[i][size - 1 - i];
}
printf("%d, %d\n", sum1, sum2);
}
