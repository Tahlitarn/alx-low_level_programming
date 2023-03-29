#include "main.h"
/**
 * swap_int - swap thevalue of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;
	m =*a;
	*a = *b;
	*b = m;
}
