#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: On success 1
 * and -1 on error,and no err is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
