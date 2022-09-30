#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
