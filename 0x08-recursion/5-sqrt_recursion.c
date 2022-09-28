#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - finds the square root of a value n
 * @n: an input integer
 * Return: returns the square root of the value n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - finds the square root
 * @prev: previous value
 * @root: square root value
 * Return: returns the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
