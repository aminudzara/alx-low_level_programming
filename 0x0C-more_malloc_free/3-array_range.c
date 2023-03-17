#include "main.h"
#include <stdlib.h>

/**
  *array_range - create an array of integers containing
  *values ordered from min to max, inclusive.
  *@min: the first value.
  *@max: the last value.
  *Return: The pointer to the newly created array,
  *NULL if the function fails or min > max.
  */
int *array_range(int min, int max)
{
	int *range;
	int size;
	int index;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	range = malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		range[index] = min++;

	return (range);
}
