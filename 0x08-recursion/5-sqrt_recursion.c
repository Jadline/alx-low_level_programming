#include "main.h"
/**
 * compute_sqrt - helper function to calculate the square root recursively
 * @n: number for which square root is to be calculated
 * @guess: current guess for the square root
 *
 * Return: natural square root of n, or -1 if not found
 */
int compute_sqrt(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (compute_sqrt(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
 *
 * Return: natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
	return (compute_sqrt(n, 1));
}
