#include <stdlib.h>
#include <stdio.h>

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
int m;
if(argc != 3)
{
printf("Error\n");
return (1);
}
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
