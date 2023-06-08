#include "main.h"
/**
 * factorial - this is factorial of int
 * @n:integer
 * Return:returns int
 */
int factorial(int n)
{
	int x;
	if (n == 0)
		return (1);
	else if	(n < 0)
		return (-1);
	else
		x = n * factorial (n - 1);
	return (x);
}
