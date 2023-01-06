#include "main.h"

int find_strlen(char *s);
int cbeck_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string
 * @s: the string to b measured
 * Return: the length of the string .
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{

		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 * @s: the string ti be checked
 * @len: the length of s.
 * @index: the index of the strinh to be chexke.
 * Return: if the string is palindrome - 1.
 * if the string is not a palindrome - p.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - check if a string is a palindome
 * @s: The string to be checked
 * Return: if the string is a palindrome - 1.
 * if the string is not a palindrome  - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
