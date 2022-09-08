#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %ld byte(S)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
