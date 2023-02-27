#include "main.h"
#include<string.h>
/**
 *  _strlen - findn length of string
 *  @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
