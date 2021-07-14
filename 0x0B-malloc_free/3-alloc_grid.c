#include <stdlib.h>

/**
 * alloc_grid - allocate a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);
	if (p ==  NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
			return NULL;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
