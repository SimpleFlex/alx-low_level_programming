#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	retuen (write(1, &c, 1));
}
