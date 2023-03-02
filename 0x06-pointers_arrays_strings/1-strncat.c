#include "main.h"

int _strlen(char *s);

/**
 *_strncat - concatenates two strings
 *@dest: char string to append to
 *@src: char string that is to be appended
 *@n: number of bytes to use, at most, from src
 *
 *Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

/**
 *_strlen - compute the length of a string
 *@s: The string
 *
 *Return: number of characters in the string excluding '\0'
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
