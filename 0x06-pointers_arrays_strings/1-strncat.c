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
int a = 0, dest_len = 0;

while (dest[a++])
dest_len++;

for (a = 0; src[a] && a < n; a++)
dest[dest_len++] = src[a++];
return (dest);
}
