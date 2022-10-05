#include "main.h"

/**
* *_strcpy - Write a function that copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @src: an string
* @dest: the string that str will be copied on
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
