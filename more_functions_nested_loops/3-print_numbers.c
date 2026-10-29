#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int compteur = 0;

	for (compteur = 0; compteur <= 9; compteur++)
	{
		_putchar(compteur + '0');
	}
	_putchar('\n');
}
