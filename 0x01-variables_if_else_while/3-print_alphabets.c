#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowecase and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
