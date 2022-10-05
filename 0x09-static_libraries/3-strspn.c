#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * The strspn() function returns the length of the initial substring
 * of the string pointed to by str1 that is made up of only those
 * character contained in the string pointed to by str2.
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
