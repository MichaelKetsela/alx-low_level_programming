#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char
 *
 * @size: size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
s = malloc(1 * size);
if (size == 0 || s == NULL)
return (NULL);

i = 0;
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
