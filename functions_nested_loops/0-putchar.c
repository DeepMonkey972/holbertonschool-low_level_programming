#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *c = "_putchar";
int compteur = 0;
while (compteur < 8)
{
_putchar (c[compteur]);
compteur++;
}
_putchar ('\n');
return (0);
}
