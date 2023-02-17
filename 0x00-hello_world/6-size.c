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

	printf("Size of char: %zu byte(s)\n", (unsigned long)Sizeof(v));
	printf("Size of an int: %zu byte(S)\n", (unsigned long)Sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)Sizeof(z));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)Sizeof(w));
	printf("Size of a float: %zu byte(s)\n", (unsigned long) Sizeof(f));
	return (0);
}
