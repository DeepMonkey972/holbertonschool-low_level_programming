#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 0 to 100, followed by a new line
 * but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int compteur;

	for (compteur = 1; compteur <= 100; compteur++)
	{
		if (compteur % 5 == 0 && compteur % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (compteur % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (compteur % 3 == 0)
		{
			printf(" Fizz");
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
