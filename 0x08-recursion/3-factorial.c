#include "main.h"

/**
 *factorial - Calculate the factorial of a given number.
 *@n: The number to be calculated.
 *
 *Return: The factorial of n.
 */
int factorial(int n)
{
	int f = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
		return (f);
	}
}
