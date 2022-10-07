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
	char *a = malloc(*s1 + n + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		a[j++] = s1[i];

	for (j = 0; j <= n; j++)
		a[j++] = s2[i];

	if (a == NULL)
		return (NULL);

	a[j++] = '\0';
	return (a);
	free(a);
}
