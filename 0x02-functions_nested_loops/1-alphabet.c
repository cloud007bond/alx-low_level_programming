#include "main.h"

/**
 * print_alphabet - print all alphabets
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);

		letter++;
	}
	_putchar('\n');
}

