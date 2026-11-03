#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int compteur = 0;

	while (s[compteur] != '\0')
	compteur++;

	while (compteur > 0)
	{
		compteur--;
		_putchar(s[compteur]);
	}
	_putchar('\n');
}
