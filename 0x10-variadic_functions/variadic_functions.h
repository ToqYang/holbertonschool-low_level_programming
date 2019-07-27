#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Structure that choose functions
 * @p: Chooese option
 * @f: Function Pointer
 **/

typedef struct op
{
	char *p;
	void (*f)();

} op_t;

void print_c(va_list x);
void print_i(va_list x);
void print_e(va_list x);
void print_s(va_list x);

#endif
