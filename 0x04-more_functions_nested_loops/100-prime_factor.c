#include <stdio.h>
/**
 * main - Numbers prime
 * Return: 0 success
 */
int main(void)
{
	unsigned long long n, prime;

	prime = 612852475143;
	for (n = 2; n < prime; n++)
	{
		if (prime % n == 0)
		{
			prime /= n;
			n--;
		}
	}
	printf("%llu\n", prime);
	return (0);
}
