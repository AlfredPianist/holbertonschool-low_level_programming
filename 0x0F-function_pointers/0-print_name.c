#include "function_pointers.h"

/**
 * print_name - executes a function passed as a function pointer
 *              to a string of characters.
 * @name: The string to be passed to the function pointer.
 * @f: The function pointer to print_name_as_is or print_name_uppercase.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
