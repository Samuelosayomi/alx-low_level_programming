#include <stdio.h>

/**
 * main - Program that print all combination of numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
