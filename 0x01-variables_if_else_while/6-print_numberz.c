#include<stdio.h>
/**
 * main -entry point of int data type
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
	}
	putchar('\n');
	return (0);
}

