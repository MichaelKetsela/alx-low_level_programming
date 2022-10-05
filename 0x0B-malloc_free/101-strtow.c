#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
int **strtow(char *str)
{
	char *sp;
	int w = 0;
	
	if (str == NULL)
		return (NULL);
		
	while (srt[w])
		w++;
	
	sp = malloc(sizeof(char) * (w + 1));
	sp = strtok(str, "\t");
	while (sp != NULL)
	{
		printf("%s\n", sp);
		sp = strtok(NULL, "\t");
	}
	

	return (0);
}
