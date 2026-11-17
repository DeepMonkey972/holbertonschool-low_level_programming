#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: a pointer to a function that takes a string as an argument
 *
 * Description: This function takes a string (name) and a function pointer (f)
 *              as arguments. It checks if either the name or the function
 *              pointer is NULL, and if so, it returns without doing anything.
 *              If both are valid, it calls the function pointed to by f,
 *              passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
