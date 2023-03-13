#include "main.h"
#include <stdlib.h>

/**
 *create_array - Create an array of characters,
 *and initialize it with a specific character.
 *@size: The size of the array.
 *@c: The character to initialize with.
 *
 *Return: If size is 0 or it fails - NULL.
 *Otherwise - pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
