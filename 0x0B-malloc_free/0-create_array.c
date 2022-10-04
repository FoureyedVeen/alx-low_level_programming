#include "main.h"

/**
*create_array - creates an array of char
*@size: size of array to be created
*@c: characeter of an array initialized
Return: a pointer to an array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);
s = (char *)malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
