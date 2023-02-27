#include "main,h"
/**
 * rev_string -function that reverse
 * @s: string
 * Return: nothinh
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char b;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (a < i)
	{
		b = s[i];
		s[i] = s[a];
		s[a] = b;
		a++;
		i--;
	}
}
