#include "main.h"

/**
 * array_range - createe array of iinteger using malloc
 *
 * @min: minimum  range of arrayy
 *
 * @max: maximum  range of arrayy
 *
 * Return: array  pointerr
 */

int *array_range(int min, int max)
{
	int *arr;	
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
