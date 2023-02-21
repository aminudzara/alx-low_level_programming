#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
