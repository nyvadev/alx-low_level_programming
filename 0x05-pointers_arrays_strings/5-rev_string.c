#include "main.h"
#include <stddef.h>

/**
 * rev_string - function that reverses a string.
 * @s: take a string as parameter
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j = 0;
	char *tmp = NULL;

	while (s[i])
	{
		i++;
	}
	len = i - 1;
	for (j = len; j >= 0; j--)
		tmp[len - j] = s[len];

	i = 0;
	while (i <= len)
	{
		s[i] = tmp[i];
		i++;
	}
}

