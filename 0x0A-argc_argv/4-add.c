#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the positive numbers
 * @argc: Count the number of the arguments
 * @argv: Ptr to string of count
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, res;

	i = 0;
	res = 0;

	if (argc <= 1)
	{
		printf("%d\n", res);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= 48 && *argv[i] <= 57))
			{
				printf("Error\n");
				return (1);
			}

			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
