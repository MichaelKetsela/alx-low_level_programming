#include "main.h"

/**
 * prime - searches for if a number is prime
 *
 * @i: the number to check
 * @j: the numbers we'll go through
 *
 * Return: Whether or not the number is a prime number
 */

int prime(int i, int j)
{
	if (i <= 1 || i % j == 0)
		return (0);
	else if (i == j)
		return (1);
	else if (i > j)
		prime(i, j + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 *
 * @n: the number to check
 *
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
