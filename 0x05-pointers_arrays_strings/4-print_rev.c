#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: take a string as parameter
 */

void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i])
	{
		len++;
		i++;
	}

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

