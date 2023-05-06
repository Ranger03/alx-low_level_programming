#include "main.h"

/**
 * set_bit - set bit 2 1.
 * gsdf indeq.
 * @m: ptr of an unsigned long integer.
 * @indeq: indeq of bit...
 *
 * Return: 1 if pass, -1 if failed.
 */
int set_bit(unsigned long int *m, unsigned int indeq)
{
	unsigned int m;

	if (indeq > 63)
		return (-1);

	m = 1 << indeq;
	*n = (*n | m);

	return (1);
}
