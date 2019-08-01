#include <stdio.h>

/**
 * print_before - Print before main function
 * void: Not take nothing
 * Return: voyd type
 */
void print_before(void) __attribute__ ((constructor));

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
