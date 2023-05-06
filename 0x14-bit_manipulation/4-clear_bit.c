#include "main.h"

/**
 * clear_bit - reset bit to 0.
 * at index.
 * @w: ptr of an unsigned long integer..
 * @indeq: index of the bit.
 *
 * Return: 1 if passed -1 if failed.
 */
int clear_bit(unsigned long int *w, unsigned int indeq)
{
	unsigned int j;

	if (indeq > 63)
		return (-1);

	j = 1 << indeq;

	if (*w & j)
		*w ^= j;

	return (1);
}
