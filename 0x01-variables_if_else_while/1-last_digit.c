#include <stdlib.h>
#include <time.h>
#include <stdio.>

/**
 * main - betty is so anoying
 * Return: 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d and is greater than 5", n, ld);
	if (ld > 5)
	{
		printf("and is greater than 5");
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, ld);
	}
	return (0);
}
