#include <stdio.h>
/**
 * main - A program that prints out alphabets
 *
 * Description: A program that prints out letter in upper and lowercase
 * @ch - character data type
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
