#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers supplied as parameters to the function,
 * followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		if ((separator != NULL) && (i != (n - 1)))
			printf("%d%s", va_arg(pa, int), separator);
		else
			printf("%d", va_arg(pa, int));
	}
	printf("\n");

	va_end(pa);
}
