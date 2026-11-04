#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
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
