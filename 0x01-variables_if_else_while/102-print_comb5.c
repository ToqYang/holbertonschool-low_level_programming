#include <stdio.h>
/**
* main - Entry point
* Return: 0
**/
int main(void)
{
int f, s;
int a, b, c, d;
for (f = 0; f < 100; f++)
{
a = f / 10;
b = f % 10;
for (s = 0; s < 100; s++)
{
c = s / 10;
d = s % 10;
if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (!(a == 9 && b == 8))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
