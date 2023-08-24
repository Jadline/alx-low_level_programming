#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: the function to store the results
 * @size_r: buffer size
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* variable declaration */
	int p = 0, q = 0, k, l = 0, f, z, d = 0;

	while (n1[p] != '\0')
		p++;
	while (n2[q] != '\0')
		q++;
	if (p > q)
		l = p;
	else
		l = q;
	if (l + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		p--;
		q--;
		if (p >= 0)
			f = n1[p] - '0';
		else
			f = 0;
		if (q >= 0)
			z = n2[q] - '0';
		else
			z = 0;
		r[k] = (f + z + d) % 10 + '0';
		d = (f + z + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
