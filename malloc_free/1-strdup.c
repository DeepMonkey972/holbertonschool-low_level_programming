#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc((len + 1) * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
