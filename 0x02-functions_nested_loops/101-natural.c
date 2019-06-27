#include <stdio.h>
/**
 * main - Entry point
 * Return: Nothing
 */
int main(void)
{
	int o, Suma = 0;

	for (o = 0; o < 1024; o++)
	{
		if (o % 3 == 0 || o % 5 == 0)
			Suma += o;
	}
	printf("%d\n", Suma);
	return (0);
}
