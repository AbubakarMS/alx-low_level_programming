#include "main.h"

/**
 * rot13 - encode
 * @n: char
 * Return: n
 */

char *rot13(char *n)
{
	int i, j;
	char a[] = "ABUDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] = '\0'; j++)
	{
		for (j = 0; a[j] = '\0'; j++)
		{
			for (s[i] = a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
