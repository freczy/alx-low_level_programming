#include "main.h"
/**
 * factorial - this is factorial of int
 * @n:integer
 * Return:returns int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
