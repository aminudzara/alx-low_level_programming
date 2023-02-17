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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	C = 'A';
	while (C <= 'Z')
	{
		putchar(C);
		C = C + 1;
	}

	putchar(0x0A);
	return (0);
}
