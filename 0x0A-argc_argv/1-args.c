#include <stdio.h>

/**
 *main - function that prints the name
 *@argc: argc parameter
 *@argv: an array of a a command listed
 *Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
