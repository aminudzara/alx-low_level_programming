#include "dog.h"

/**
 *init_dog - Initialize a variable of type struct dog
 *@d: address of the variable
 *@name: The name of the dog
 *@age: The age of the dog
 *@owner: The owner of the dog
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = d;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
