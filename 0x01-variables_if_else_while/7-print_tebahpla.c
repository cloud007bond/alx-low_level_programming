#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c;

	for (c = 'z'; c >= 'a'; c--)
	{

		putchar(c);
	}
	return (c);
}

