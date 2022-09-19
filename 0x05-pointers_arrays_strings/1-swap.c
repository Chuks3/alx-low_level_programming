#include "main.h"

/**
 * swap_int - to swap the values of intergers.
 * @a: first interger pointer.
 * @b: second interger pointer.
 **/

void swap_int(int *a, int *b)
{
int *c = b;
int *d = a;

*a = c;
*b = d;
}
