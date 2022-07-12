#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: function para
 * Return: void
 */

void rev_string(char *s)
{
	int k;

	for (k = strlen(s); k != '\0'; k--)
	{
		*s = s[k];
	}
	printf("\n");
}
