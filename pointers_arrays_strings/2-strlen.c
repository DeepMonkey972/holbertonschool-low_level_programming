#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of the string
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
