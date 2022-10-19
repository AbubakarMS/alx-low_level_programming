#include <main.h>

/*
 * main - prints the word _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char ch[] = "_putchar";

	for (c = 0; c < 8; c++)
	{
		_putchar("%c \n", ch[c])
	}

	return (0);
}
