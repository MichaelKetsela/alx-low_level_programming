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
if(argc != 3)
{
print("Error\n");
}
int m = argv[1] * argv[2];
printf("%d\n", m);
return (0);
}
