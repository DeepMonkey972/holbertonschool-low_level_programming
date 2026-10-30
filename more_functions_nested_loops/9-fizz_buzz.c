#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
int main(void)
{
	int compteur;

	for (compteur = 0; compteur <= 100; compteur++)
	{
		if (compteur % 5 == 0 && compteur % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (compteur % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (compteur % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (compteur == 100)
		{
			printf("\n");
		}
		else 
		{
			printf("%d ", compteur);
		}
	}
	return (0);
}
