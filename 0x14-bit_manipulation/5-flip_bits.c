#include "main.h"

/**
 * flip_bits - couNts the nuMber of bits to change
 * to get from oNe nUmber to another
 * @n: first numBer
 * @m: second nuMber
 *
 * Return: The nUmber of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int v, count = 0;
    unsigned long int instant;
    unsigned long int excluv = n ^ m;

    for (v = 63; v >= 0; v--)
    {
        instant = excluv >> v;
        if (instant & 1)
            count++;
    }

    return (count);
}
