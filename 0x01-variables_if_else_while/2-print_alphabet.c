#include <stdio.h>
/**
 * main - A program that prints out lowercase alphabets
 *
 * Description : This program prints out alphabets and a newline
 * @ch - character data type
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
