#include<stdio.h>
/**
 * main - sizes
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", Sizeof(char));
	printf("Size of an int: %zu byte(S)\n", Sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", Sizeof(float));
	return (0);
}
