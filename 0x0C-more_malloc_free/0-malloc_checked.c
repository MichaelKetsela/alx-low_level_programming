#include "main.h"

/**
 * malloc_checked - Entry Point
 *
 * @b: the number to allocate memory for
 *
 * Return: pointer to the new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
