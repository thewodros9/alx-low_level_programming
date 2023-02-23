#include "main.h"
/*
 *  print_diagonal - draws a diagonal
 *  @n: the number of times ptinted
 *  Return: empty
 */
void print_diagoanl(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(32);
			_putchar('\n');
		}
	}
}