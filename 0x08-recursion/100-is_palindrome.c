#include "main.h"
/**
 * strl - size
 * @s: pointer
 * Return: recursion
 */
int strl(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strl(s + 1));
}
/**
 * pl - palindrome
 * @s: pointer
 * @l:position
 * @i: iterator
 * Return: boolena
 */
int pl(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (pl(s, i + 1, l - 1));
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: recusion
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (pl(s, 0, strl(s)));
}
