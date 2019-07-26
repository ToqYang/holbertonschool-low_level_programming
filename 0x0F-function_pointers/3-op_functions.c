#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Print the addition of two numbers
 * @a: Number 1
 * @b: Number 2
 * Return: The operation sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Print the substractuion of two numbers
 * @a: Numb-1
 * @b: Numb-2
 * Return: The operation substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Print the multiplication of two numbers
 * @a: Num_11
 * @b: Num_22
 * Return: The operation of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Print the division of two numbers
 * @a: Number_1
 * @b: Number_2
 * Return: The operation division
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Print the module of two numbers
 * @a: Num_1
 * @b: Num_2
 * Return: The operation of module
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
