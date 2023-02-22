#include "main.h"
/**
 * print_sign - printing sign after comparision
 * @n: is to be compared with zero
 * Return: 1 if n greater than 0 and 0 when n is 0 or -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
	return ('/');
	}
	return (0);
}
