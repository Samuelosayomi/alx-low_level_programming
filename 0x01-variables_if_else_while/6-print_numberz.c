#include <stdio.h>

/**
 * main - Function to print integers from 0 - 9
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <=9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
