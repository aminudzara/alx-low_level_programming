#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Seuccess)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n = n + 1;
	}
	putchar(0x0A);
	return (0);
}
