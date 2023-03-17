#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocate memory for an array of
  *given number of elements of given bytes size each
  *@nmemb: number of elements
  *@size: byte size of each element
  *Return: On success - a pointer to the allocated memory'
  *If @nmemb or @size is 0, or the function fails - NULL
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *filter;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	filter = array;
	for (i = 0; i < (nmemb * size); i++)
	{
		filter[i] = '\0';
	}

	return (array);
}
