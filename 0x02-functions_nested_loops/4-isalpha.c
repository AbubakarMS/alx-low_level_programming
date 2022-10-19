#include "main.h"

/**
 * _isalpha - check is c is lowercase or uppercase
 * @c: character to be checked
 * Return: 1 if it is upper or lowercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
