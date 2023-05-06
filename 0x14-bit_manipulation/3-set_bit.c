#include "main.h"

/**
 * set_bit - set bit 2 1.
 * gsdf indeq.
 * @w: ptr of an unsigned long integer.
 * @indeq: indeq of bit...
 *
 * Return: 1 if pass, -1 if failed.
 */
int set_bit(unsigned long int *w, unsigned int indeq)
{
	unsigned int j;

	if (indeq > 63)
		return (-1);

	j = 1 << indeq;
	*w = (*w | j);

	return (1);
}
