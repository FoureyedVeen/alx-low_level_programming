#include "main.h"

/**
 * put2 - print every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void put2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			{
				_putchar('\n');
				break;
			}
			if (i % 2 == 0)
			_putchar(str[i]);
			i++;
				
			
	}
}
