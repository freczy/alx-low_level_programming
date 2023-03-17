#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int p;

	for (d = 0; d < 9; d++)
	{
	for (p = d + 1; d + 1; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == 0 && p == 9)
	continue;
	putchar(',');
	putchar(',');
	}
	}
	}
	putchar('\n');
	return (0);
}
