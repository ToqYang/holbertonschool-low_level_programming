#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d", n);
if (n > 5)
{
printf(" and is %d greater than 5\n", n % 10);
}
else if (n < 6)
{
printf(" and is %d less 6 and not 0\n", n % 10);
}
else
{
printf(" and is %d 0\n", n % 10);
}
return (0);
}
