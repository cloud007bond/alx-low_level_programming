#include "main.h"

/**
 * swap_int -> given two integersswap the value they are holding
 * @a: parameter 1
 * @b: paraneter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
