#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - new datatype
 * @doggie - pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - datatype of struct dog
 * Return: 0
 */
typedef struct dog dog_t;
typedef struct dog_t my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
