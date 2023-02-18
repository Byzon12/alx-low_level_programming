#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char m = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

