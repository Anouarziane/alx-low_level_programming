#include "main.h"

/**
 * set_bit - sets a bit at a given index To 1
 * @n: pointer to the number to change now
 * @index: index of The bit to set to 1 now
 *
 * Return: 1 for sUcCess, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    unsigned long int mask = 1UL << index;
    *n |= mask;

    return (1);
}
