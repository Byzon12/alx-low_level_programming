 #include "main.h"
/**
 *  _isdigit - to ceck if a parametre is number between 0 to 9
 *  @c: number to be checked
 * Return: 1 for digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
