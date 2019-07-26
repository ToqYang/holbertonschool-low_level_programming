#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
	int a, b;

	int (*operator)(int, int);

	operator = &get_op_func;

	if ()

	(*operator)(a, b);

}
