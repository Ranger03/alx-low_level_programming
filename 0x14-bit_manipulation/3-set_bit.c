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
	unsigned int m;

	if (indeq > 63)
		return (-1);

	m = 1 << indeq;
	*w = (*w | m);

	return (1);
}
