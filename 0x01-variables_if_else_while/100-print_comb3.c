#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
		while (a < 9)
		{
			b = a;
				while (b < 9)
				{
					putchar('0' + a);
					putchar('1' + b);
					if (a != 8 && b != 9)
					{
						putchar(',');
						putchar(' ');
					}
					b++;
				}
				a++;
		}
	putchar('\n');
	return (0);
}
