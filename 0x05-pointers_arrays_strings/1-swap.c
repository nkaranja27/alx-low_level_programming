#include "main.h"

/**
 * swap_int - swaps integer values
 * @a: first value pointer
 * @b: second value pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
