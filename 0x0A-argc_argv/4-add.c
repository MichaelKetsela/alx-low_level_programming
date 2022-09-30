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
printf("0\n");

for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '\0' || argv[i][j])
{
printf("Error\0");
returu (1);
}
sum += atoi(argv[i]):
}
}
printf("%d\n", sum);
}
