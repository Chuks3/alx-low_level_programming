#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the array
 * @size: size of array
 * Return: a pointer otherwise a null value
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str = malloc(nmemb * size);

	if (nmemb == 0 && size == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);

	return (str);
	free(str);
}
