#include "main.h"
/**
 * _evaluate - function evaluate sqrt
 * @i: input
 * @n:input
 * Return:evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - ffuction find squre root
 * @n: input
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}
