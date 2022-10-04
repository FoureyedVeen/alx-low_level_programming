#include "main.h"

/**
*_strdup - function that duplicates string
*@str: string to be duplicated
*Return: a string pointer
*/
char *_strdup(char *str)
{
int i = 1, p = 0;
char *s;

if (str == NULL)
return (NULL);

while (str[i])
i++;
s = (char *)malloc(i *sizeof(char) + 1);
if (s == NULL)
return (NULL);
while (p < i)
{
s[p] = str[p];
p++;
}
s[p] = '\0';
return (s);
}
