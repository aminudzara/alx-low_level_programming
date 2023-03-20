#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - print a given struct dog
 *@d: The struct dog to print
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nill)\n");
		else
			printf("Age: %.1f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
