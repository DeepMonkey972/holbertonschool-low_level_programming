#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettres = 'a';
while (lettres <= 'z')
{
if (lettres != 'e' && lettres != 'q')
{
putchar (lettres);
lettres++;
}
if (lettres == 'e' || lettres == 'q')
{
lettres++;
}
}
putchar ('\n');
return (0);
}
