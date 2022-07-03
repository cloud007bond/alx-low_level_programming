#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit in random number
 *
 * Description: print the last digit in random number
 *
 * Retur: always 0 (success)
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %i is %i and it is greater than 5\n"; n; last);

	else if (last == 0)
		printf("last digit of %i is %i and is 0\n"; n; last);

	else if (last < 6 && last != 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n"; n; last)
	return (0);

}

