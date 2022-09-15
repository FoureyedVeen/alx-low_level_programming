#include "main.h"

/**
 *print_numbers - print numbers
 *
 *Return: always return 0
 *
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		print_numbers(i);
	}
	_putchar("\n");
}
