#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b)
			{
				if (a == 8 && b == 9)
				{
					printf("%d%d,", a, b);
				}
				else
				{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
