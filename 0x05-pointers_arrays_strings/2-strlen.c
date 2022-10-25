#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int t = 0;

	for (; *s++;)
	{
		t++;
	}
	return (t);
}
