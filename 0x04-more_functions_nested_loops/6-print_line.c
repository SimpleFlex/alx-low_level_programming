#include "main.h"

/**
 * print_line - prints straight line n times
 *
 * @n: times straight linr is printed
 * Return: no value
 */
void print_line(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
