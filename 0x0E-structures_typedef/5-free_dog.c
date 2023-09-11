#include <stdio.h>
#include "dog.h"
/**
 * free_dog - prtotype to free dog
 * @d: pointer of dog_t type
 * Return: 0
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
