#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */
 int _strlen(char *s)
{
	int compteur = 0;

	while (*s != '\0')
	{
		s++;
		compteur++;
	}
	return (compteur);
}
void print_rev(char *s)
{
	int compteur = _strlen(s);

	for (; compteur != -1; compteur--)
	{
		_putchar(s[compteur]);
	}
	_putchar('\n');
}
