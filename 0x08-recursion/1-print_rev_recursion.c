#include "main.h"

/**
 *_print_rev_recursion - Print a sting in reverse, followed by a new line.
 *@s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
