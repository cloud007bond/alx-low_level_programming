#include <stdio.h>

/**
 * main - print letters of alphabet
 *
 * Description: print letters of alphabet
 *
 * Return: always 0 (success)
 *
 */

int main(void)

{
	int i = 97;

	while (i < 123)

	{
		putchar(i);

		i++;
	}

	putchar(10);

	return (0);
}
