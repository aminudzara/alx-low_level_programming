#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: the number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
