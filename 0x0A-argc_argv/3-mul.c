#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the multiplication of arguments
 * @argc: Count the number of the arguments
 * @argv: Ptr to string of count
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, res;

	i = 0;
	res = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d", res);
	}

	return (0);
}
