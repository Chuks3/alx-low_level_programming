#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a string of characters
 **/

char *str_concat(char *s1, char *s2)
{
	int b = 0, len = 0;
	int a;
	char *str;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		str[b++] = s1[a];

	for (a = 0; s1[a]; a++)
		str[b++] = s2[a];

	return (str);
	free(str);
}
