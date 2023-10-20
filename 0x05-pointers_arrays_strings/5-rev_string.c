#include "main.h"

/**
 * rev_string - Prints reverse of a string
 * @s: Required string
 */

void rev_string(char *s)
{
	int i, j, k = _strlen(s);
	char c;

	for (i = 0, j = k - 1; i < j; j--, i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 *  _strlen - Function that prints lenght of a string
 *  @s: Required string
 *  Return: 0 (String lenght)
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
