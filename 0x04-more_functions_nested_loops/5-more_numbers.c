#include "main.h"

/**
 * more_numbers - prints more numbers.
 */

void more_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
int b;

for (b = 0; b < 15; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
}
