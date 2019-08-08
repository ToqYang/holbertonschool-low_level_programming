#ifndef MANI_BITS
#define MANI_BITS

#include <stdlib.h>

int _putchar(char c);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
