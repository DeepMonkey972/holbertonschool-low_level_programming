#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	res = nb1 * nb2;
	printf("%d\n", res);
	return (0);
}
