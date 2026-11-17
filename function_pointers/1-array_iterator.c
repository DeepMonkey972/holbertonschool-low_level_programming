#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of integers
 * @size: the number of elements in the array
 * @action: a pointer to a function that takes an int argument and returns void
 *
 * Description: This function takes an array of integers, its size, and a
 * function pointer (action) as arguments. It checks if either the array or
 * the function pointer is NULL. If either is NULL, it returns without doing
 * anything. Otherwise, it iterates through the array and calls the function
 * pointed to by action on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
