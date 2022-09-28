#include "main.h"

/**
 * _strlen_recursion - function that returns a length of a string
 * @s: a pointer of a string to find the length of
 *
 * Return: void
 *
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
