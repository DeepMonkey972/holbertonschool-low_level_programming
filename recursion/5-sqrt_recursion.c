#include "main.h"
#include <stdio.h>
/**
 * helper - recursive function to find the square root of a number
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	else if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (helper(n, guess + 1));
	return (0);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
