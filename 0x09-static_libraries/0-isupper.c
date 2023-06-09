#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - capital letters
 * @c: character
 *
 * Return: 0 or 1
 */


int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
