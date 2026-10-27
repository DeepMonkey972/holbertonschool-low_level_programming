#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to compute
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
int last = n % 10;
if (n >= 0)
{
_putchar(last + '0');
return (last);
}
if (n <= 0)
{
_putchar(-last + '0');
return (-last);
}
return (0);
}
