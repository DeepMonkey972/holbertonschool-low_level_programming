#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nombre;
nombre = 48;
while (nombre <= 57)
{
putchar (nombre);
if (nombre != 57)
{
putchar (',');
putchar (' ');
}
nombre++;
}
putchar ('\n');
return (0);
}
