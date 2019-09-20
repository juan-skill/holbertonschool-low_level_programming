#include <stdio.h>

/**
 * main - display all digits in base 10 numbers
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = '0';
while (n <= '9')
{
	putchar(n++);
}
putchar('\n');
return (0);
}
