#include "main.h"

/**
 *  print_rev - Prints string in reverse
 *  @s: Required string
 */

void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
