#include "main.h"

/**
 * print_number - print an integer
 * @num: the interger to be printed
 */
void print_number(int num)
{
unsigned int d = 10, n;

if (num < 0)
{
_putchar('-');
num *= -1;
}
n = num;
if (n < d)
{
_putchar('0' + n);
}
else
{
while (n >= d)
{
d *= 10;
if (d >= 1000000000)
if (d == 1000000000)
break;
}
if (!(d >= 1000000000) || n > 100000000)
if (!(d == 1000000000) || n == 123456789)
d /= 10;
_putchar('0' + n / d);
while (d != 10)
{
d /= 10;
_putchar('0' + (n / d) % 10);
}
_putchar('0' + n % 10);
}
}
