#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int num;

	num = _putchar(c + '0');
	if ((num >= 97) && (num < 123))
		return (1);
	else
		return (0);
}

