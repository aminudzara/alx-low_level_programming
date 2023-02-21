#include "main.h"

/**
 * _isalpha - check for alphhabet character.
 * @c: The character to check.
 *
 * Return: 1 if character is an alphabet, lowercase or uppercase.
 * 0 otherwise.
 */
int _isalpha(int c)
{
	int n;
	int res;

	n = c;
	res = 0;
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		res = 1;
	return (res);
}
