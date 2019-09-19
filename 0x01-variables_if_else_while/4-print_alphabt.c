#include <stdio.h>

/**
 * main - display alphabet a-z, but not yq or e
 *
 * Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
