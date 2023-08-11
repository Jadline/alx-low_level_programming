#include <stdio.h>
/**
 * main - A program that prints all single digit numbers
 *
 * Description:A program that prints numbers less than ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
