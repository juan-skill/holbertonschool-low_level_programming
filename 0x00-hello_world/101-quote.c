#include <unistd.h>

/**
 *main - write text to stdout (Standar Output)
 *
 *Return: return 1
 */
int main(void)
{
	write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
