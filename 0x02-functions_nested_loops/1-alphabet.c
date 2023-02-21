#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - make alphabet
 *
 * Return: o (success)
 */
void print_alphabet(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

}
