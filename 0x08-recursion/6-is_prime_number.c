#include "main.h"
/**
 * evaluate - recursion loop
 * @n: input
 * @i: number of iterate
 * Return: return 1 or 0
 */
int evaluate(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	if (n % i != 0)
		return (evaluate(n, i + 1));
	return (0);
}
/**
 * is_prime_number - primr or not
 * @n: input
 * Return:return 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (evaluate(n, i));
}
