#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: if str1 < str2, the negative difference of the
 * first unmatched character
 * if s1 == s2, 0.
 * if s1 > s2, the positve difference of the
 * first unmatched character
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
