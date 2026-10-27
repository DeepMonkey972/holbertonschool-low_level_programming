#include "main.h"
/**
 * print_alphabet_x10 -  uytr
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char a;
int i = 0;
for (i = 0; i < 10; i++)
{
for (a = 'a'; a != 'z' + 1; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
