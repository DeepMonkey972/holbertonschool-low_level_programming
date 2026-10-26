#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char nombre = 122;
while (nombre >= 97)
{
putchar (nombre);
nombre--;
}
putchar ('\n');
return (0);
}

