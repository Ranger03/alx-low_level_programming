#include "main.h"

/**
 * get_endianness - check end...
 *
 * Return: 0 if end big, 1 if end lit..
 */
int get_endianness(void)
{
	unsigned int v;
	char *u;

	v = 1;
	u = (char *) &v;

	return ((int)*u);
}
