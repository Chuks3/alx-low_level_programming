#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a string of characters
 **/

char *str_concat(char *s1, char *s2)
{
	int b = 0;
	int a;
	char *str;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] || s2[a];)
		a++;

	str = malloc(sizeof(char) * a);

	if (str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		str[a++] = s1[a];

	for (a = 0; s1[a]; a++)
		str[a++] = s2[a];

	return (str);
