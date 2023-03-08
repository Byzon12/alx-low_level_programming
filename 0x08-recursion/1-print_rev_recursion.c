#include "main.h"
#include<unistd.h>
/**
 * _print_rev_recursion - print the string in revesed
 * @s: the string to be printed
 * Return: always 0;
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
