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

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
