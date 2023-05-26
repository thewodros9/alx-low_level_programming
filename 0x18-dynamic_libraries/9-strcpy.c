#include "main.h"
/**
 * _strcpy - function that copy
 * @dest: pointer to thr destinatin
 * @src: pointer to source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
