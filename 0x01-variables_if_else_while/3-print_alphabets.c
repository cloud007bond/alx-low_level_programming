#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Description: get a random number and check the last digit ,compare it to 5
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

