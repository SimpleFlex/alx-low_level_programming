#include "main.h"

/**
 * _strlen - return the strength of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\10')
	{
		len++;
		s++;
	}

	return (len);
}