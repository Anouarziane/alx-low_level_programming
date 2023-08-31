#include "main.h"

/**
 * clear_bit - seTs  of the valUe of a given bit to 0
 * @n: pointer to  number to chaNge
 * @index: index of the biT to clear now
 *
 * Return: 1 for sUccess and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & ~(1UL << index));
	return (1);
}
