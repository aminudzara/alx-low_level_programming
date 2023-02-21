#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: The character to check.
 *
 * Return: 1 if character is lowercase.
 * 0 otherwise.
 */
int _islower(int c)
{
	int n;
	int res;

	n = c;
	res = 0;
	if (n > 96 && n < 123)
		res = 1;
	return (res);
}
