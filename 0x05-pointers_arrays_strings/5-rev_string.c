#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to a string to reverse
 *
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
int len, k, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
;
k = 0;
half = len / 2;

while (half--)
{
temp = s[len - k - 1];
s[len - k - 1] = s[k];
s[k] = temp;
k++;
}
}
