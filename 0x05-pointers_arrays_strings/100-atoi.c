#include "main.h"
/**
 * _atoi -  function that converts string to integer
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int b = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			b *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n + 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = m = 10 - (s[i] + '0');
			i++;
		}
	}
	b *= -1;
	return (n * b);
}
