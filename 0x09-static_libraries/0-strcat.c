#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		do {
			*dest_end++ = *src++;
		} while (src_len--);
	}
	return (dest);
}
