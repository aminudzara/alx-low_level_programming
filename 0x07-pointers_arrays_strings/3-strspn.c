#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 * Return: the number of bytes in initial segment of s
 *         ehich consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
		}
		return (n);
}
