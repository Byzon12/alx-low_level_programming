#include "main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int m = '0';

	int c;

	while (m <= '9')
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		m++;
	}
}
