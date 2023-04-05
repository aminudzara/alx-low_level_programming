#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 *new_dog - create a new instance of dog
 *@name: The dog name
 *@age: The dog age
 *@owner: The dog owner
 *Return: Address of the newly created dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcpy(my_dog->owner, owner);

	return (my_dog);
}

/**
 *_strlen - calculate the number of characters in a given string,
 *excluding '\0'
 *@s: the string to calculate
 *
 *Return: The number of characters in @s
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++)
		count++;

	return (count);
}

/**
 *_strcpy - copy the value of string source to string destination
 *@dest: The string to copy to
 *@src: The string to copy from
 *Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}
