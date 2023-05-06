#include "main.h"

/**
 * get_bit - give back the bit value of given
 * indeq.
 * @m: unsigned long integer inputs..
 * @indeq: indeq of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int m, unsigned int indeq)
{
	unsigned int t;

	if (m == 0 && indeq < 64)
		return (0);

	for (t = 0; t <= 63; m >>= 1, t++)
	{
		if (indeq == t)
		{
			return (m & 1);
		}
	}

	return (-1);
}
