#include "main.h"

/**
 * _puts - print a string and a newline
 * @str: pointer to a string to print
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
int a = 0;

while (str[a] != '\0')
{
putchar(str[a]);
a++;
}
putchar('\n');
return (0);
}
