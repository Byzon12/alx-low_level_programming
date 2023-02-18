#include<stdio.h>
/**
 * main - entry point printing decimal
 *
 * REturn: 0 (success)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
