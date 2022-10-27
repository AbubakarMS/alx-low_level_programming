#include "main.h"

/**
 * reverse_array - reverse te contentof an array
 * @a: array
 * @n: number of element in an array
 * Return: 0 success
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
