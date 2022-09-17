#include "main.h"

/**
 * print_diagonal - prints a diagonal line.
 * @n: An interger.
 */

void print_diagonal(int n)
{
int a;
int b;

for (a = 0; a < 10; a++)
{
for (b = 0; b < a; b++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
