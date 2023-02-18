#include<stdio.h>
/**
 * main - print the alphate using putchar function
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
