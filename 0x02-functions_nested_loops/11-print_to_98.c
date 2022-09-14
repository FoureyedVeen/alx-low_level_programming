#include "main.h"
#include <stdio.h>
#include "6-abs.c"

/**
 * print_to_98 - a functiion that prints all natural number from n to 98
 *
 * @n: number input
 * Return: Always 0
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 0; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
