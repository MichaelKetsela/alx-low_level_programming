#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *ch;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ch = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ch[i]);
			break;
		}
		printf("%02hhx ", ch[i]);
	}
	return (0);
}
