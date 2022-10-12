#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * if no element matches, return -1;
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || size <= 0 || cmp == NULL)
  return (-1);

if (array && size && cmp)
while (i < size)
{
cmp(array[i]);
i++;
}
return (i);
}
