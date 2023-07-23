#include <stdio.h>

/**
 * main - Entry point
 * Description: print all the numbers of
 * base16 in lowecase
 * Return: Always 0 (success)
 */
int main(void)
{
char digit;
int ch;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
