#include "main.h"

/**
 * binary_to_uint - change and bin to integer
 * unsigned integer.....
 * @b: bin....
 *
 * Return: unsigned integr......
 */
unsigned int binary_to_uint(const char *k)
{
	unsigned int answ;
	int enght, bin_qwe;

	if (!k)
		return (0);

	answ = 0;

	for (enght = 0; k[enght] != '\0'; enght++)
		;

	for (enght--, bin_qwe = 1; enght >= 0; enght--, bin_qwe *= 2)
	{
		if (k[enght] != '0' && k[enght] != '1')
		{
			return (0);
		}

		if (k[enght] & 1)
		{
			answ += bin_qwe;
		}
	}

	return (answ);
}
