#include "main.h"

/**
 *  print_rev - Prints string in reverse
 *  @s: Required string
 */

void print_rev(char *s)
{
	int i, j = _strlen(s);

	for (i = j - 1; i >= 0; 1--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
