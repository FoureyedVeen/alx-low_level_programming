#include "main.h"

/**
 * put2 - print every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void put2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++)
			_putchar('\n');
	}
}
