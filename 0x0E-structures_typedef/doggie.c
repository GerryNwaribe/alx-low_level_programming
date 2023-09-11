#include <stdio.h>
#include "dog.h"
/**
 * dog *doggie - prototype
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
struct dog *doggie(char *name, float age, char *owner)
{
	struct dog *dogg;

	dogg = malloc(sizeof(struct dog));
	if (dogg == NULL)
	{
		return (NULL);
	}
	dogg->name = name;
	dogg->age = age;
	dogg->owner = owner;

	return (dogg);
}
