#include <stdio.h>

/**
 * main - display alphabet a-z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
