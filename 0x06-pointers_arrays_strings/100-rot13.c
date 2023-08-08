#include "main.h"

/**
 * rot13 - converts string to leet
 * @c: character string pointer
 *
 * Return: A pointer to be encoded to a string
 */
char *rot13(char *c)
{
int i, j;
char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (alphabet[j] == c[i])
{
c[i] = rot_13[j];
break;
}
}
}
return (c);
}
