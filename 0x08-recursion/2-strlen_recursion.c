#include "main.h"

/**
 * _strlen_recursion - print the length of string
 * @s: string
 * Return: aways 0
 * base case <0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
