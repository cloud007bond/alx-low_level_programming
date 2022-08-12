#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Description: print the letter  alphabet in lower acse then in upper case
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);

		i++;
	}
	while (j < 91)
	{
		putchar(j);

		j++;
	}
	putchar(10);
	return (0);
}
