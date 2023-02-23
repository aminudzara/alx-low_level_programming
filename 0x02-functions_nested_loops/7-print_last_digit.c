#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int las_dig;

	if (n < 0)
		n = n * (-1);
	las_dig = n % 10;
	_putchar(las_dig + '0');

	return (las_dig);
}
