#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char nombre_1 = 48;
char nombre_2 = 97;
while (nombre_1 <= 57)
{
putchar (nombre_1);
nombre_1++;
}
while (nombre_2 <= 102)
{
putchar (nombre_2);
nombre_2++;
}
putchar ('\n');
return (0);
}
