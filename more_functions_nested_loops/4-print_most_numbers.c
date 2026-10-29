#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int compteur = 0;

	for (compteur = 0; compteur <= 9; compteur++)
	{
		if (compteur == 2 || compteur == 4)
		{
		}
		else
		{
			_putchar(compteur + '0');
		}
	}
	_putchar('\n');
}
