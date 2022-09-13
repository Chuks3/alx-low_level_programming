#include "main.h"

/**
 * print_last_digit - checks for last digit.
 * @c: Our character.
 * Return: Always 0.
 */

int print_last_digit(int c)
{
int o;

if (c > 0)
{
c = -c;
o = n % 10;
_putchar(o + '0');
return (o);
}
}
