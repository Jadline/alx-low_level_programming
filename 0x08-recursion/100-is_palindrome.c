#include "main.h"
/**
 * _strlen - helper function to calculate the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * check_palindrome - check if a string is palindrome recursively
 * @s: input string
 * @start: starting index of the substring to check
 * @end: ending index of the substring to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
