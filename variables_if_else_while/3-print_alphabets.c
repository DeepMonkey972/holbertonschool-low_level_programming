#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lettres_min = 'a';
char lettres_maj = 'A';
while (lettres_min <= 'z')
{
putchar (lettres_min);
lettres_min++;
}
while (lettres_maj <= 'Z')
{
putchar (lettres_maj);
lettres_maj++;
}
putchar ('\n');
return (0);
}
