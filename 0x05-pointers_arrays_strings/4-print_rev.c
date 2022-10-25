#include "main.h"

/**
 * print_env - reverse chars
 * @s: char
 * Return: void
 */

void print_env(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		_putschar(s[i]);
	}
	_putschar('\n');
}
