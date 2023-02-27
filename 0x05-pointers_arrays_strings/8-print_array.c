#include "main.h"
#include <stdio.h>
/**
 * print_array - functin that print a elements
 * @a: pointer to the first
 * @n: pointer to second
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for  (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
