#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Successs)
*/
int main(void)

{
	char c; 
	int i;
	long b;
	long long d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("siz of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
