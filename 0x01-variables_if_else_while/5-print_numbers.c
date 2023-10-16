#include <stdio.h>
/**
 * main - Print all single digit from 0 - 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
