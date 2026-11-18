#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list liste;

	if (n == 0)
		return (0);
	va_start(liste, n);
	for (i = 1; i <= n; i++)
		somme = somme + va_arg(liste, int);
	va_end(liste);
	return (somme);
}
