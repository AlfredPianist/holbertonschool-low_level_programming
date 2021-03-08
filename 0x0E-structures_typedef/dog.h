#ifndef _DOG_
#define _DOG_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A dog's structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner's name.
 *
 * Description: This structure represents a dog with its name,
 *              age and owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * init_dog - initialize a dog structure with its name, age and owner.
 * @d: The dog structure to be initialized.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print the content's of a dog structure.
 * @d: The dog structure to be printed.
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog copying the contents from name and owner.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner's name.
 *
 * Return: A new dog type structure with its name, age and owner or
 *         NULL if failed to allocate memory.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free's a dog structure's memory allocation.
 * @d: The dog structure to be freed.
 */
void free_dog(dog_t *d);

#endif
