#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number.
 *
 * Return: 1 if number is greater than zero.
 * 0 if number is zero.
 * -1 if number is less than zero.
 */
int print_sign(int n)
{
	int num;
	int res;

	num = n;
	res = 0;
	if (num > 0)
	{
		res = 1;
		_putchar('+');
	}
	else if (num == 0)
	{
		res = 0;
		_putchar('0');
	}
	else
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}
