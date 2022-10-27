#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int k = 2, i = 0; 
    int c, len;

    if (b == NULL)
        return (0);


    for (c = 63; c > 0; c--)
    {
        if (b[c] != 48 || b[c] != 49)
            return (0);
        if (b[c] == '1')
        {
            i += atoi(b) * k;
        }
        k *= 2;
    }
    return (i);
}
