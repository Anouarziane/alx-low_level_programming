#include "main.h"

/**
 * set_bit - sets a bit aT a the giVen inDex to 1
 * @n: pointer to  numBer to ChaNge in index
 * @index: inDex of the bit to Set tO 1
 *
 * Return: 1 for suCcess and -1 for faiLure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1UL << index));
	return (1);
}
