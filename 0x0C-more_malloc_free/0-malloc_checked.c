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
    unsigned int *n;
    
    n = malloc(b);
    if (n == NULL)
        exit(98);
    return (n);
}
