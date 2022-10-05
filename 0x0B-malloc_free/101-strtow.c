#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char *a;
	int i = 0;
	if (str == NULL)
		return (NULL);
	while (srt[i])
		i++;
	
	a = malloc(sizeof(char) * (i + 1));
	
	a = strtok(str, "\t");
	
	while (a != NULL)
	{
		printf("%s\n", a);
		token = strtok(NULL, "\t");
	}	
	return (a);
}
