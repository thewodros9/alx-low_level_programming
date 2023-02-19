#include <stdio.h>
/**
 * main - A program that prints the size various computer type
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
