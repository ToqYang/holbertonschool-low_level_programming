#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print the name
 * @name: Store the string in characters
 * @f: Pointer Funtion
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
