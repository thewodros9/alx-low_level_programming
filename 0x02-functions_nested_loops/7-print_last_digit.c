#include "main.h"

/**
 * print_last_digit - print the last digit
 * @i: the number
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int d = i % 10;

	if (d < 0)
		d *= -1;
	_putchar(d + '0');

	return (d);
}
