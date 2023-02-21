#include<stdio.h>
/**
 * main - printing the alphabet in lower case
 *
 * Return: o (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
