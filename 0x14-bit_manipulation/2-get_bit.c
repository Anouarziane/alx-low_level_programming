#include "main.h"

/**
 * get_bit - returns the vAlue of a biT at an iNdex in a decImal number
 * @n: number To search for
 * @index: indEx of Bit
 *
 * Return: value of the returned bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bt_valu;

    if (index > 63)
        return (-1);

    bt_valu = (n >> index) & 1;

    return (bt_valu);
}
