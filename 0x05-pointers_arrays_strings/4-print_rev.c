#include "main.h"

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: pointer to a string to print in reverse
 *
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
int a = 0;

while (s[a])
a++;
while (a--)
_putchar(s[a]);
_putchar('\n');
return (0);
}
