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
	do {
		if (c == 'e' || c == 'q')
		{
			c = c + 1;
			continue;
		}
		putchar(c);
		c = c + 1;
	} while (c <= 'z');
	putchar(0x0A);
	return (0);
}
