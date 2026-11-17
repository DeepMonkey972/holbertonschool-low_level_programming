#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to a comparison function that takes int argument and returns
 *
 * Description: This function takes an array of integers, its size, and a
 * comparison function pointer (cmp) as arguments. It checks if the size is
 * less than or equal to 0, or if either the array or the comparison function
 * pointer is NULL. If any of these conditions are true, it returns -1.
 * Otherwise, it iterates through the array and calls the comparison function
 * on each element. If the comparison function returns a non-zero value for
 * any element, it returns the index of that element. If no match is found,
 * it returns -1.
 * Return: the index of the first element for which the comparison function
 * returns a non-zero value, or -1 if no match is found or if the input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (index < size)
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}
	return (-1);
}
