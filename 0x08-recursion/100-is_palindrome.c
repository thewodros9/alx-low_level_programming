#include "main.h"
/**
 * strl - size
 * @s: pointer
 * Return: recursion
 */
int strl(char *s)
{
	if (!*s)
		return (1);
	return (1 + strl(++s));
}
/**
 * pl - palindrome
 * @s: pointer
 * @l:position
 * Return: boolena
 */
int pl(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + 1))
		return (pl(s + 1, l - 2));
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: recusion
 */
int is_palindrome(char *s)
{
	int l = strl(s);

	return (pl(s, l - 1));
}
