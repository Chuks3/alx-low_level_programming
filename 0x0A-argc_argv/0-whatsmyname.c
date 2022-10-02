#include <stdio.h>

/**
 * main - prints its program name, followed by a new line
 * @argc: unused variable
 * @argv: argument vector
 **/

void main(int argc, char **argv)
{
	printf("%s", *argv);
}
