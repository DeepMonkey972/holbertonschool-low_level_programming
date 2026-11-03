#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
		end++;
	while (start < end / 2)
	{
		temp = s[start];
		s[start] = s[end - start - 1];
		s[end - start - 1] = temp;
		start++;
	}
}
