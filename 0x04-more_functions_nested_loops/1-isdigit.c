#include "main.h"

/**
 * _isdigit - checks if parameter is number between 0 to 9
 * @c: input number
 * Return: 1vif the number is (0 to 9), 0 in othercase
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
