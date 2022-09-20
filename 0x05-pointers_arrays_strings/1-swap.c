#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
