#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Seuccess)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar(0x0A);
	return (0);
}
