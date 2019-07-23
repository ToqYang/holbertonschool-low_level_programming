#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Call free function
 * @d: Receives the argument type struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
