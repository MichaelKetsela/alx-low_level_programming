#include "main.h"

/**
 * palindrome - checks the string
 *
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts at 0
 *
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int palindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, --len, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * is_palindrome - checks to see if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if it's a palindrome, 2 if it's not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = strlen(s) - 1;

	return (palindrome(s, length, i));
}
