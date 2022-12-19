#include "main.h"
#include <stdio.h>

/**
 * print_array - print array elements
 * @a: array
 * @n: number of value to be printed
 * Return: return a and n inputs
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
		if (p == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
