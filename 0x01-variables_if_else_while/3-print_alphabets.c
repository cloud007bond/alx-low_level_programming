#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 *  Return: Always (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

