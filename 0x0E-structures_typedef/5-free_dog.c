#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free previoulsly allocated memory to struct dog
 *@d: The address of the struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
