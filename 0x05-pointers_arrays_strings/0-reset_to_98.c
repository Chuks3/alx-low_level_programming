#include "main.h"

/**
 * reset_to_98 - resets a value to 98.
 * @n: The corresponding interger.
 **/

void reset_to_98(int *n)
{
int a = 5;

n = &a;
*n = 98;
}
