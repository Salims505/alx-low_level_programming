#include <stdio.h>

/**
 * main - Entry point
 * Description: print all letters except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}
