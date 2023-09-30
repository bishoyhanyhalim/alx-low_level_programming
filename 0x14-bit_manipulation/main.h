#ifndef NEW_BIT
#define NEW_BIT

#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);


#endif
