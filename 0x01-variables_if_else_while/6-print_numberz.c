#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num_bdiez;
num_bdiez = '0';
while (num_bdiez <= '9')
{
putchar(num_bdiez);
num_bdiez++;
}
putchar('\n');
return (0);
}
