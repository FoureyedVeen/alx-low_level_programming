#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar('j');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');

		if (!(i == 98 && j == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
