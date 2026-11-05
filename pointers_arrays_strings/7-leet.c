#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *lettre = "aAeEoOtTlL";
	char *nb = "4433007711";
	int i = 0;
	int j = 0;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == lettre[j])
			{
				s[i] = nb[j];

			}
		}
	}
	return (s);
}
