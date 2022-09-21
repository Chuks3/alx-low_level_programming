#include <stdio.h>

/**
 * main - entry point.
 * Return:0
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('%c', a);
	printf("\n");
	return (0);
}
