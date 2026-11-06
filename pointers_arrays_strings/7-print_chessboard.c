#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int ligne;
	int colonne;

	while (ligne < 8)
	{
		colonne = 0;
		while (colonne < 8)
		{
			_putchar(a[ligne][colonne]);
			colonne++;
		}
		_putchar('\n');
		ligne++;
	}
}
