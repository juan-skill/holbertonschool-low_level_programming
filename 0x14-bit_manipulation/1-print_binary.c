#include "holberton.h"

/**
 * print_binary - prints binary representation of a number
 * @n: a decimal number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = n, v = 0;
	int count = 0;

	/*if (!n)*/
	if (n == 0)
	{
		printf("0");
		return;
	}

	count = 0;
	/*while ((i >>= 1))*/
	while ((i = i >> 1) > 0)
		count++;

	while (count >= 0)
	{
		v = n >> count;
		_putchar((v & 1) + '0');
		count--;
	}
}
