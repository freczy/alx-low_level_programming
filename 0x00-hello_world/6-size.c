#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a int: %zu bytes\n", sizeof(intType));
	printf("size of an float: %zu bytes\n", sizeof(floatType));
	printf("Size of a double: %zu bytes\n", sizeof(doubleType));
	printf("size of a char: %zu bytes\n", sizeof(charType));

	return (0);
}
