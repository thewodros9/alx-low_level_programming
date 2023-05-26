#include "main.h"
/**
 * _strlen - find length of a string
 * @s: pointer ti the string
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
