#include "main.h"

/**
 * print_alphabet_x10 - prints alphabeth 10 times followed by a new line
 *
 * Return: 0
 */
void print_alphabet_10(void)
{
	char c, int i;
	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}