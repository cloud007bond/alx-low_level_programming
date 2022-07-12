#include "main.h"
#include <string.h>

/**
 * strlen -> function to get the length of a string
 * @s: string pointer to pass to this function
 * Return: return lenght of string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
