#include "main.h"

/**
 * cap_string - capitalize all strings
 *@n: char
 * Return: 0
 */

char *cap_string(char *n)
{
	int i, j;

	j = 0;
	if (n[j] >= 'a' && n[j] <= 'z')
	{
		n[j] = n[j] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}
	return (n);
}
