#include "main.h"

/**
 * swap_int - function that swap two integers
 * @a: pointer to an integer to swap
 * @b: pointer to an integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;
	
	n = *a;
	*a = *b;
	*b = n;
}