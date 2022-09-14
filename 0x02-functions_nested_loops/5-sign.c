#include "main.h"

/**
 * print_sign - main function
 *
 * @r: character to compare
 *
 * Return: 1 if positive
 *
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	if (r == 0)
	{
		_putchar ('0');
		return (0);
	}
	_putchar('-');
	return (0);
}
