#include "dog.h"

/**
 * init_dog - initialize a dog structure with its name, age and owner.
 * @d: The dog structure to be initialized.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
