#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newly allocated space in memory,
  *which contains a copy of @str.
  *@str: The string to copy.
  *
  *Return: On success - a pointer to the duplicated string.
  *        If insufficient memory, or @str is NULL - NULL.
  */
char *_strdup(char *str)
{
	char *new_str;
	int str_len;
	int i;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);
	new_str = malloc(sizeof(char) * str_len);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
		new_str[i] = str[i];

	return (new_str);
}

/**
  *_strlen - return the length of a string excluding '\0'
  *@s: The string to measure
  *
  *Return: the number of characters in @s
  */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
