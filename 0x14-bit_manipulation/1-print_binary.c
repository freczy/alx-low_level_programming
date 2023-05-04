#include "main.h"
/**
 * _power - calculate the base and power
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int a;
	unsigned int i;

	a = 1;
	for (i = 1; i <= pow; i++)
		a *= base;
	return (a);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char mflag;

	mflag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			mflag = 1;
			_putchar('1');

		}
		else if (mflag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
