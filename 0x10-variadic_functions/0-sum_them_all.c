#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all given parameters
 * @n: number of parameters
 *
 * Return: the sum of given parameters.
 * Or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
