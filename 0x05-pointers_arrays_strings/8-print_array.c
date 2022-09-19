#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: the start of an array of integers
 * @n: the number of array elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
