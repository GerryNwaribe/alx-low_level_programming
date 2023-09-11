#include <stdlib.h>
#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

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
#endif
