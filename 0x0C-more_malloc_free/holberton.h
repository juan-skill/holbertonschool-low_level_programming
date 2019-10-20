#ifndef HOLBERTON_H
#define HOLBERTON_H

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
void error(int status);
int *multiply(int *mul, char *, char *, int, int);
void print_number(int *,int, int);
int _putchar(char);

#endif
