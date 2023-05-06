#include "main.h"

/**
 * flip_bits -returns num of bit
 * to filp
 * @m: number one.
 * @q: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int m, unsigned long int q)
{
	unsigned int numbi;

	for (numbi = 0; m || q; n >>= 1, q >>= 1)
	{
		if ((m & 1) != (q & 1))
			numbi++;
	}

	return (numbi);
}
