#include "main.h"

/**
 * _isdigit - the function prints out a digit
 * @c: character to be used
 *
 * Return: gives 1 or 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
