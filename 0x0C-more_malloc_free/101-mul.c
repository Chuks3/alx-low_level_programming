#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: always zero otherwise 98
 **/

int main(int argc, char **argv)
{
	int num1, num2, num;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if ((num1 > 9 && num1 < 100) && (num2 > 9 && num2 < 100))
	{
		num = num1 * num2;
		printf("%d\n", num);
		return (0);
	}

	printf("Error\n");
	return (98);
}
