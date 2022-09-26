#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: unsigned integer.
 * Return: Src.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
