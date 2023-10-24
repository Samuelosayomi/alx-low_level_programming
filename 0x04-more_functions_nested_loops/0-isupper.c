#include "mian.h"

/**
 * _isupper - Function that checks for upper or lower case
 * @c: Character to check
 * Return: 1 0r 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
