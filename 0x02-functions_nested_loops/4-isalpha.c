#include "main.h"
/**
 * _isalpha - checks for c if lowercase or uppercase
 * c is the character to be checked
 * Return: 1 for lowercase or uppercase 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)  c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
