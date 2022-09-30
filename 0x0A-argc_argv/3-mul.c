#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
if(argc != 3)
{
print("Error\n");
return (1);
}
int m;
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
