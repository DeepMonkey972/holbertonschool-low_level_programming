#include "main.h"
/**
 * print_alphabet -
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char a = 'a';
for (a; a != 'z' + 1; a++)
{
_putchar(a);
}
_putchar('\n');
}
