#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c > 64 && c < 91)
{
return (0);
}
return (1);
}
