#include "main.h"

/**
 * print_rev - prints the reverse.
 * @s: Character to be printed.
 **/

void print_rev(char *s)
{
int i, n;

for (n = 0; s[n] != '\0'; n++)

for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
