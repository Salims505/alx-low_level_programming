#include "main.h"

/**
 * _puts - print a string and a newline
 * @str: pointer to a string to print
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar (str[i]);
i++;
}
_putchar('\n');
}
