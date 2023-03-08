#include "main.h"
/**
 * _puts_recursion - function
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		__puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
