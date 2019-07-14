#include <stdio.h>

/**
 * main - Print the arguments
 * @argc: Count the number of the arguments
 * @argv: Ptr to string of count
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", --argc);

        return (0);
}
