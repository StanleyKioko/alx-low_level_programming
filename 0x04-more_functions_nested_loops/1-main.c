#include "holberton.h"
#include <stdio.h>

/**
* main - check the code for Holberton School students.
* Return: Always 0.
*/
int _isdigit(int c);

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
}
