#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: the array being passed
 * @size: the size of the array
 * @action: pointer to the function we need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if (array && size &&action)
while (i < size)
{
action(array[i]);
i++;
}

}
