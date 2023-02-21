#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
