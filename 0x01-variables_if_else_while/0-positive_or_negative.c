#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastn;

	srand (time(0));
	n = rand() - RAND_MAX / 2;
	lastn = % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5,\n" n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero,\n" n, lastDigit);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 not 0,\n" n, lastDigit);
	}
	return (0);
}
