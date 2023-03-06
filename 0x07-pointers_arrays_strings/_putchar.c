#include "main.h"
#include <unistd.h>
/**
 * _putchar  writes the charactor c to stdout
 * @c: the charactor to print
 * Return: on success 1
 * On error, -1 is returned, and error is srt appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
