#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to look for
 * Return: On success - the first occurrence of @c in @s
 * On failure - NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
