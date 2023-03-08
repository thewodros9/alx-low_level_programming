#include "main.h"
/**
 * _pow_recursion - calculate x raise to y
 * @x: input
 * @y: input
 * Return: pow recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x + _pow_recursion(x, y - 1));
	else
		return (1);
}
