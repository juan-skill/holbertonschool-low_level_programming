#include <unistd.h>
#include <string.h>

/**
 * main - write text to stdout (Standar Output)
 *
 * Return: return 1
 */
int main(void)
{
	char *str = NULL;
	int length = 0;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	length = strlen(str);

	write(2, str, length);

	return (1);
}
