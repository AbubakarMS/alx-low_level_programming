#include "main.h"

/**
 * swap_int - swaps tye value of two int
 * @a: value 1
 * @b: walue 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*a = *b;
	*b = c;
}
