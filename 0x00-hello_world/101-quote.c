#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, strlen(s));
	return (1);
}
