#include <unistd.h>

/**
 *main - write text to stdout (Standar Output)
 *
 *Return: return 1
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\0", 59);
	return (1);
}
