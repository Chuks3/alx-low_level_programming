#include "main.h"

/**
 * print_numbers - prints numbers.
 * @a: Interger to be printed.
 * Return: Always 0.
 */

void print_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
_putchar(a + '0');
}
_putchar('\n');
return (0);
}
