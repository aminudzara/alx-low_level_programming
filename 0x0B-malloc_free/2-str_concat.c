#include "main.h"
#include <stdlib.h>

/**
  *str_concat - Concatenate two strings.If null is passed,
  *             treat as empty string.
  *@s1: The first string.
  *@s2: The second string.
  *
  *Return: On success - a pointer to a newly allocated space in memory,
  *        containing the concatenated string.
  *        On failure - NULL.
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len, i, stri = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[stri++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[stri++] = s2[i];
	str[stri + 1] = '\0';

	return (str);
}
