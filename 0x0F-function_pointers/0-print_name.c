#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: The name to print.
 * @f: The address of the function.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
