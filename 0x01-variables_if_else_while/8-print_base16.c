#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Seuccess)
 */
int main(void)
{
	char c;
	char C;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	C = 'a';
	while (C <= 'f')
	{
		putchar(C);
		C = C + 1;
	}

	putchar('\n');
	return (0);
}
