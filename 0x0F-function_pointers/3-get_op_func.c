#include <stdlib.h>
#include "3-calc.h"

/**
 * @get_op_func: Get operator functions
 * @s: Store the char selection
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (i != NULL)
	{
		if (s[0] == ops->op[i])
		{
			return (ops[i])
		}
		i++;
	}
	return (ops[i]->f);
}
