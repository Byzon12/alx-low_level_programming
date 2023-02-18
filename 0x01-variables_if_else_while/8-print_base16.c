#include<stdio.h>
/**
 * main - entry point printing hexdecimal numbers from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = '0';

	char m = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
