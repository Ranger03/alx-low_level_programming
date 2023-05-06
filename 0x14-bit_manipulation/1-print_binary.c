#include "main.h"

/**
 * print_binary - prints the bin rep...
 * a number.
 * @m: unsigned long integer....
 *
 * Return: nothing...
 */
void print_binary(unsigned long int m)
{
	if (m >> 0)
	{
		if (m >> 1)
			print_binary(m >> 1);
		_putchar((m & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
