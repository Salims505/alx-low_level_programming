#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string reference
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
int i;

for (j = 0; str[i] != '\0'; i++)
;
i++;
for (j /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
