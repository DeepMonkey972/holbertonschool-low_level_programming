#include "main.h"
/.**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{

	int compteur = _strlen(s);

	for (; compteur != -1; compteur--)
		_putchar(s[compteur]);
	_putchar('\n');
}
