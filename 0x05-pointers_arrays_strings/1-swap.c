#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
