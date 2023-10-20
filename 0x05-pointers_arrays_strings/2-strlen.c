#include "main.h"

/**
 * _strlen - Function that outputs lenght of a string
 * @s: Required string
 * Return: 0 (lenght of string)
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
