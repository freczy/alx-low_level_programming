#include "main.h"
/**
 * _strlen_recursion - len of string
 * @s:this is a string
 * Return:integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if	(*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return	(i);
}
