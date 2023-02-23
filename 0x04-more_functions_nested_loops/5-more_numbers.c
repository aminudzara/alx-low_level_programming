#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			int first_digit;

			first_digit = n / 10;
			if (first_digit != 0)
				_putchar(first_digit + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
