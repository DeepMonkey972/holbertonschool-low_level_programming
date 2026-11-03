#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (len = (len + 1) / 2; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');

}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
