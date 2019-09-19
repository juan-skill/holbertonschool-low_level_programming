#include <unistd.h>

/**
 *main - write text to stdout (Standar Output)
 *
 *Return: return 1
 */
int main(void)
{
	write(stdout, "and that piece of art is useful - Dora Korpar, 2015-10-19\0", 58);
	return (1);
}
