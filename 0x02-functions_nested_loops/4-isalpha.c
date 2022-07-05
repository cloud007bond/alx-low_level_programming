#include "main.h"

/**
 * _isalpha - check for alphabetical order
 * @c: a character to be check on
 * Return: return 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

