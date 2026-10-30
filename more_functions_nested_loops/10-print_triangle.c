#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int colonne, ligne;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (ligne = 1; ligne <= size; ligne++)
	{
		for (colonne = 1; colonne <= size; colonne++)
		{
			if (colonne <= size - ligne)
			{
				_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
}
