#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to the memory location to fill
 * @b: the constant byte to fill with
 * @n: the number of bytes to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
