#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int n;
	int lastofn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastofn = n % 10;

	if(lastofn > 5)
	{
		printf "Last digit of %d is %d and is greater than 5\n"
	}
	else if (lastofn == 0)
	{
		printf "Last digit of %d is %d and is 0\n"
	}
	else
	 {
		printf "Last digit of %d is %d and is less than 6 and not 0\n"
	}
	return (0);
}
