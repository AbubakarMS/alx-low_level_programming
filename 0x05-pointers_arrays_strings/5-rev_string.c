#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[c];
		s[b] = s[c];
		s[c] = d;
	}
}
