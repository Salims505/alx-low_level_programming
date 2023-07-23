#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible combinations of
 * all single-digits numbers
 * Return: Alawys 0 (success)
 */
int main(void)
{
int a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
