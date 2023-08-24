#include "main.h"

/**
* rev_string - reverse string
* @n: integer parameter
* Return: Always 0 (Success)
*/
void rev_string(char *n)
{
	int k = 0;
	int m = 0;
	int p;

	while (*(n + k) != '\0')
	{
		k++;
	}
	k--;
	for (m = 0; m < k; m++, k--)
	{
		p = *(n + m);
		*(n + m) = *(n + k);
		*(n + k) = p;
	}
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, k = 0, m = 0, digits = 0;
	int value1 = 0, value2 = 0, my_p = 0;

	while (*n1 != '\0')
	{
		k++;
	}
	while (*n2 != '\0')
	{
		m++;
	}
	k--;
	m--;
	if (m >= size_r || k >= size_r)
		return (0);
	while (m >= 0 || k >= 0 || overflow == 1)
	{
		if (k < 0)
			value1 = 0;
		else
			value1 = *(n1 + k) - '0';
		if (m < 0)
			value2 = 0;
		else
			value2 = *(n2 + m) - '0';
		my_p = value1 + value2 + overflow;
		if (my_p >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (my_p % 10) + '0';
		digits++;
		m--;
		k--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string (r);
	return (r);
}
