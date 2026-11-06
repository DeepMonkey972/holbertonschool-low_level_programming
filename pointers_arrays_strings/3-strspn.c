#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *reset = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				sum++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
		{
			return (sum);
		}
		s++;
		accept = reset;
	}
	return (sum);
}
