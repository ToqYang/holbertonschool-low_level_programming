#include "dog.h"

/**
 * init_dog - Print the structure of dog
 * @d: Struct of the dog
 * @name: Store the char of name
 * @age: Store the age
 * @owner: Store the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
