#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 0;
	int a;
	int b;
	int c2;
	int e;
	int f;

	while (c <= 98)
	{
		a = (c / 10 + '0');
		b = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			e = (c2 / 10 + '0');
			f = (c2 % 10 + '0');
			if (c < c2)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(e);
				putchar(f);
				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
