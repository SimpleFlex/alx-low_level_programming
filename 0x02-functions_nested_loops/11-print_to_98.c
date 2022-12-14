#include <stdio.h>

/**
 * print_to_98 - prints all natural numbersfrom n to 98
 *
 * @n: start of the natural number
 *
 * Return: nothing on success
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(",");
			n++;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(",");
			n++;
		}
	}
	putchar('\n');
}
