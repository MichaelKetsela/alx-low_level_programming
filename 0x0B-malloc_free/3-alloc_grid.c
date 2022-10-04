#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			ar[j][k] = 0;
	}
	return (a);
}
