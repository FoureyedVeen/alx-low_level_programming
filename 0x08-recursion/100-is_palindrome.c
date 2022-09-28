#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - function to get the length of the string
 * @s: string to calculate length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * _is_palindrome - checks if s a palindrome string
 * @s: input string
 * Return: 1 if a palindrome, 0 if otherwise
 */
int _is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - function with a reversed string
 * @s: input string
 * @len: length of string
 * Return: reversed string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (helper_palindrome(s + 1, len - 2));
	else
		return (0);
}
