#include "main.h"
/**
 * check_prime - helper function to check primality recursively
 * @n: input integer
 * @divisor: current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: input integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
