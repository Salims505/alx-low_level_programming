#include "main.h"

/**
 * _strncat - concatenates two string usings at most n bytes from src
 * @dest: string to append on
 * @src: string to append to dest
 * @n: number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
char *p;

while (*(dest + i) != '\0')
i++;
while (!(*(src + j) == '\0' || j == n))
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';
p = dest;
return (p);
}
