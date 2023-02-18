#include<stdio.h>
/**
 * main - entry point for special charcters
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
