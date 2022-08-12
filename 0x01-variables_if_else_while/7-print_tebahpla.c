#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c = 'z';

	while (c >= 'a')
	{

		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

