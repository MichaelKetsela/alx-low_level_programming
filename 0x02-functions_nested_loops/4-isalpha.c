#include "main.h"

/**
 * _isalpha- Returns 1 if c is a letter, lowercase or uppercase
 * othetwise return 1
 * @c: is a char 
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
} 
}
