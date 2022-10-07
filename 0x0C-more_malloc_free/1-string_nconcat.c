#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: length of second string
 * Return: null else void
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *a = malloc(*s1 + n);

	for (i = 0; s1[i]; i++)
		a[i] = s1[i];

	for (j = 0; j <= n; j++)
	{
		a[i] = s2[j];
		i += 1;
	}

	if (a == NULL)
		return (NULL);
	return (a);
	free(a);
}
