#include "main.h"

/**
 * _isdigit - ok
 * @c: ok
 * Return: 1 for digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
