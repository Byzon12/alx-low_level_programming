#include "main.h"

/**
 * _puts - print the string followed by new line
 * @str: the string
 * Return: 0
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
