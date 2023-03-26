#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_char(va_list pa);
void print_integer(va_list pa);
void print_string(va_list pa);
void print_float(va_list pa);

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 * @...: a variable list of things to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	int i;
	int j;
	char *separator;
	print_t f[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(pa, format);

	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while ((j < 4) && (*(format + i) != *(f[j].symbol)))
			j++;

		if (j < 4)
		{
			if (separator != NULL)
				printf("%s", separator);

			f[j].print(pa);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(pa);
}

/**
 * print_char - prints character
 * @pa: list of parameters to be printed
 */
void print_char(va_list pa)
{
	char c;

	c = va_arg(pa, int);
	printf("%c", c);
}

/**
 * print_integer - prints integer
 * @pa: list of parameters to be printed
 */
void print_integer(va_list pa)
{
	int i;

	i = va_arg(pa, int);
	printf("%d", i);
}

/**
 * print_float - prints float
 * @pa: list of parameters to be printed
 */
void print_float(va_list pa)
{
	float f;

	f = va_arg(pa, double);
	printf("%f", f);
}

/**
 * print_string - prints string
 * @pa: list of parameters to be printed
 */
void print_string(va_list pa)
{
	char *str;

	str = va_arg(pa, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
