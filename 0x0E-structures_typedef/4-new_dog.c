#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to be calculated.
 *
 * Return: The length of the string s.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	if (s == NULL)
		return (length);

	for (length = 0; s[length] != '\0'; length++)
		length++;

	return (length);
}

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination of the copied string.
 * @src: The string to be copied.
 *
 * Return: The pointer of the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;

	if (src != NULL)
		for (counter = 0; src[counter] != '\0'; counter++)
			dest[counter] = src[counter];

	dest[counter] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog copying the contents from name and owner.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner's name.
 *
 * Return: A new dog type structure with its name, age and owner or
 *         NULL if failed to allocate memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = NULL;
	dog = malloc(sizeof(*dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = NULL;
	dog->age = age;
	dog->owner = NULL;

	dog->name = malloc(_strlen(name) + 1 * sizeof(dog->name));
	dog->owner = malloc(_strlen(owner) + 1 * sizeof(dog->owner));
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
