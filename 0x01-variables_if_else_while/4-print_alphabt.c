#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q' && ch != 'e') && ch <= 'z')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
