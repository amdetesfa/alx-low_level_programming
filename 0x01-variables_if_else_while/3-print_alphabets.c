#include <stdio.h>
/**
 * main - entry point
 * description: alphabets
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 6;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
