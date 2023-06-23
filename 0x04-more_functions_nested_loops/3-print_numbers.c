#include "main.h"

/*
 * print_numbers - prints numbers, from 0 to 9
 * @void: no parameter
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch < '10'; ch++)
		_putchar(ch);
	_putchar('\n');
}

