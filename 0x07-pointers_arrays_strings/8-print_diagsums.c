#include "main.h"

/**
 * print_diagsums - print diagonal summaries
 * @a: the matrix
 * @size: size of diagonal
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int dia1 = 0;
	int dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += a[(i * size) + i];
		dia2 += a[(size - i) + ((size - 1) * i);
	}
	printf("%d, %d\n", dia1, dia2);
}
