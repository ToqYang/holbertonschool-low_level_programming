#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Print new pointer
 * @name: Store name of the string
 * @age: Store the age
 * @owner: Store the owner in string
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, k;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	d->name = malloc(sizeof(char) * (i + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (j + 1));

	if (d->owner == NULL)
	{
		free(d);
		free(d->owner);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		d->name[k] = name[k];
	}

	for (k = 0; k <= j; j++)
	{
		d->owner[k] = owner[k];
	}

	d->age = age;

	return (d);
}
