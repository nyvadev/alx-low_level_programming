#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * @void: doesn't take argument
 * Return : void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

