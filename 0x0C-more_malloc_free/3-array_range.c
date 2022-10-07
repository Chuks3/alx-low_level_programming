#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer
 * @max: second & last integer
 * Return: a pointer to an int otherwise null
 **/

int *array_range(int min, int max)
{
	int i = 0;
	int *num = malloc(sizeof(int) * 2);

	num[i++] = min;
	num[i] = max;

	if (min > max)
		return (NULL);

	else if (num == NULL)
		return (NULL);

	return (num);
	free(num);
}
