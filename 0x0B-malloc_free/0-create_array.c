#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: the string
 * Return: a character
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	
	else if (ptr == NULL)
		return (NULL);

	else
		for (a = 0; a < size; a++)
			ptr[a] = c;
	return (ptr);
}
