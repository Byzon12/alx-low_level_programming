#include "main.h"

/**
 * print_rev - print the sring in reversed
 * @s: stringh
 * Return: 0
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index])
		index++;
	while (index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
