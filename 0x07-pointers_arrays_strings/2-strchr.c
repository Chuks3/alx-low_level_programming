#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: Either s or null.
 **/

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s);
	}

	if (s[i] == c)
		return (s + i);

	return (0);
}
