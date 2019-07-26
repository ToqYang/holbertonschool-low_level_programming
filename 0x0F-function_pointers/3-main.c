#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Print the arguments
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: 0 if is success
 */

int main(int argc, char **argv)
{
	int a, b;

	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operator(a, b));

	return (0);
}
