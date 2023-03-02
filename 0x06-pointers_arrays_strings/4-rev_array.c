#include "main.h"
/**
 * reverse_array - reverse array of integer
 * @a:array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
