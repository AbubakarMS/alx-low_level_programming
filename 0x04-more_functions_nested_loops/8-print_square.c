#include "main.h"

/**
 * print_square - ook
 * @size: ok
 * Return: ok
 */

void print_square(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
