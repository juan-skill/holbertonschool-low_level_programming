#ifndef HOLBERTON_H
#define HOLBERTON_H

/*libraries*/
#include <stdio.h>

/*prototype functions*/
int _putchar(char);
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
