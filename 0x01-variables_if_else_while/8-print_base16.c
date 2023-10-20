#include <stdio.h>

/**
 * main - Function that prints hexadecimal in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char hex_digit = '0';

	while (hex_digit <= 'f')
	{
		if ((hex_digit >= '0' && hex_digit <= '9')
				|| (hex_digit >= 'a' && hex_digit <= 'f'))
		{
			putchar(hex_digit);
		}
		hex_digit++;
	}
	putchar('\n');
	return (0);
}
