#include "main.h"

/**
 * _strlen_recursion - returns the long line
 * @s: the string to be measured
 * Return: longness of the strings
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len +=
		_strlen_recursion(s + 1);
	}

	return (len);
}
