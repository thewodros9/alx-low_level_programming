#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charactor
 * @c: the charactor
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
