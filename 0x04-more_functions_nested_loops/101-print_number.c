#include "main.h"
#include <string.h>

/**
 * print_number - print integer nmbers
 * @n: number
 * Return: 0
 */
void print_number(int n)
{
	int count;

	for (count = 0; count < strlen(n); count++)
	{
		if (n[count] >= '0' && n[count] <= '9')
		{
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
	}
}
