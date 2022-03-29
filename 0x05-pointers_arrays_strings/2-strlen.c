#include "main.h"

/**
 * _strlen - returns length of the string
 * @s: string location pointer
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
