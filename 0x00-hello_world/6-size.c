#include <stdio.h>
/**
 * main - done bysimpleflex
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an` int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c))i;
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
