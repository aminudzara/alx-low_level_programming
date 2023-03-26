#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - struct format
 *
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list pa);
} print_t;

#endif /* #define VARIADIC_FUNCTIONS_H */
