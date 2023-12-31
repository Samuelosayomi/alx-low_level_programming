#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: The int to be checked
 * Return: 1 and print + if n is >0
 * 0 and print 0 if n is ==0
 * -1 and print - if n is <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
