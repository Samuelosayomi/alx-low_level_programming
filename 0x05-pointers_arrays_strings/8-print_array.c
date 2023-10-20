#include "main.h"

/**
 * print_array - Function that prints all element in an array
 * @a: Array required
 * @n: Number of elements in "a"
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
