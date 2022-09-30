#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: integer to make absolute
 *
 * Return: int or int times neagtive
 *
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);

}
