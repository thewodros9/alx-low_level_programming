#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: pointer ti the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putcahr('\n');
}
