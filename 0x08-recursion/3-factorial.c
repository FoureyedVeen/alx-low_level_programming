#include "main.h"

/**
 * factorial - compute the factorial of a number
 * @n: number to work with
 *
 * Return: returns factor or -1
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
