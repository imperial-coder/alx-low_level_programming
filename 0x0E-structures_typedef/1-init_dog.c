#include "dog.h"

/**
 * init_dog: initialize a variable of type struct dog
 * @d: pointer to structure to initialise
 * @name: structure member "name"
 * @age: structure member "age"
 * @owner: strucuture member "owner"
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
