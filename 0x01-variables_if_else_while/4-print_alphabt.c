#include <stdio.h>
/**
 * main - A program that prints out alphabets
 *
 * Description - A program that prints out all alphabets except q and e
 * @ch - character data type
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
