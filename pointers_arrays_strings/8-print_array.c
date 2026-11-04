#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	for (n = 0; n != 5; n++)
	{
		if (n == 4)
		{
			printf("%d", *a);
		}
		else
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
