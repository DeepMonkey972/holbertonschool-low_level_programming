#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int chiffre = 0;
	int moins = 0;
	double nb = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		moins++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		chiffre = chiffre + 1;
		nb = (s[i] - '0') + nb * 10;
		i++;
	}
	if (chiffre == 0)
	{
		return (0);
	}
	if (moins % 2 != 0)
	{
		nb = -nb;
	}
	return (nb);
}
