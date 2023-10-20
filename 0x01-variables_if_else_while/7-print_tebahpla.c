#include <stdio.h>

/**
 * main - Function that prints alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
