#include <stdio.h>
/**
 * main - entry point
 * Return: Nothing
 */
int main(void)
{
	unsigned long result, count, var1, var2;

	var1 = 1;
	var2 = 2;
	for (count = 0; count < 99; count++)
	{
		result = var1 + var2;
		printf("%lu,\n", result);
		var1 = var2;
		var2 = result;
	}
}
