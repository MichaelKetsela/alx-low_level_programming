#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: a string
 * @f: the function to send the name to
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{

if (name && f)
f(name);

}
