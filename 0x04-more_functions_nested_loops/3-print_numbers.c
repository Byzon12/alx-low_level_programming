#include "main.h"
/**
 * print_numbers - print numbres from 0 to 9 followed by new lin
 *
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int m = '0';

	while (m <= '9')
	{
		_putchar(m);
			m++;
	}
	_putchar('\n');
}
