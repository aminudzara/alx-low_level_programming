#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings supplied as parameters to the function,
 * followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *str;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if (str == NULL)
			str = "(nil}";
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");

	va_end(pa);
}
