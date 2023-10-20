#include "main.h"

/**
 *  puts_half - Functions that prints half of a string
 *  @str: Required string
 */

void puts_half(char *str)
{
	int i, j, k = _strlen(str);

	j = (k - 1) / 2;

	for (i = j + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - Function that prints lenght of a string
 * @s: Required string
 * Return: 0 (string lenght)
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
