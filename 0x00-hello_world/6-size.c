#include<stdio.h>
/**
 * main - sizes
 *
 * Return: 0 (success)
 */
int main(void)
{
	char v;
	int i;
	long int z;
	long long w;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
