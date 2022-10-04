#include "main.h"

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the string to add to @s1
 *
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int l3;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	l3 = l1 + l2;

	con = malloc(sizeof(char) * l3 + 1);
	if (s3 == NULL)
		return (NULL);
  
  con = strcat (s1, s2);
	return (con);
}
