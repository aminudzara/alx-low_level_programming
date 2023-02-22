#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int p;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int first_digit;

			p = i * j;
			first_digit = p / 10;
			if (first_digit == 0)
				_putchar(' ');
			else
				_putchar(first_digit + '0');
			_putchar((p % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
