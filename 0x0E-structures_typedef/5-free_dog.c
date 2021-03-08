#include "dog.h"

/**
 * free_dog - free's a dog structure's memory allocation.
 * @d: The dog structure to be freed.
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

