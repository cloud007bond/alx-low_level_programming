#include "main.h"

/**
 * main - print lower case of an alphabet
 * Description: wriet a code that print lower acseof alphabet
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

