#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: Counter.
 * @argv: Value.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *opcode = (char *) main;
	int i, number_Bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_Bytes = atoi(argv[1]);

	if (number_Bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_Bytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != number_Bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
