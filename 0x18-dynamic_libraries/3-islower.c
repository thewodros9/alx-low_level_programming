#include "main.h"

/**
 * _islower -checks if the charactor is lowercase
 * @c: the charactor
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
