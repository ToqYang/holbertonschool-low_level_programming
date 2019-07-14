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
	if (argc != 3)
	{
		printf("Error\n");
		return(1);
	}

	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
