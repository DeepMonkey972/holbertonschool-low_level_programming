#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
