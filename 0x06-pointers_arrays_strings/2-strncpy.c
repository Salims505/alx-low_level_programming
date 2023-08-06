#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the buffer storing the string to copy
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0, src_len = 0;

while (src[a++])
src_len++;

for (a = 0; src[a] && a < n; a++)
dest[a] = src[a];

for (a = src_len; a < n; a++)
dest[a] = '\0';

return (dest);
}
