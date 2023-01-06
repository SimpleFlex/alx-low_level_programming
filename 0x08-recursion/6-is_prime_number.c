#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - chexks if a number is divisible
 * @num: the checked number
 * @div: the divisor
 *
 * Return: if the number is divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % duv == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks isf a number is prime
 * @n: the numbef to bee checked
 * Return: if the integer is not a prime - 0.
 * if th numbed is prime - 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
