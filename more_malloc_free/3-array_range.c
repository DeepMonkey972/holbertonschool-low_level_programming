#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int total;

	if (min > max)
	{
		return (NULL);
	}
	total = (max - min + 1);
	p = malloc(total * sizeof(int));
	if (p == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i != total)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
