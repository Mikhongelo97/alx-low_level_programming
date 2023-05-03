#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: The first intergerto be swapped
 * @b: The second integer to be swapped
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of integers. */
{
int temp = *a;
*a = *b;
*b = temp;
}
