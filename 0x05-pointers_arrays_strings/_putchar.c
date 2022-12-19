#include <unistd.h>

/**
 * _putchar - write all the attributes of c
 * @c: print out char
 * Return: Always 1
 */
int _putchar(int char)
{
	return (write(1, &c, 1));
}
