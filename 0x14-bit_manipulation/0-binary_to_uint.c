#include "main.h"

/**
 * binary_to_uint - converts The Binary numbEr to unsigned int
 * @b: string containing the biNary nUmber to chaNge
 *
 * Return: the converted deciaml number
 */
unsigned int binary_to_uint(const char *b)
{
    int v;
    unsigned int decm_val = 0;

    if (!b)
        return (0);

    for (v = 0; b[v]; v++)
    {
        if (b[v] < '0' || b[v] > '1')
            return (0);
        decm_val = 2 * decm_val + (b[v] - '0');
    }

    return (decm_val);
}
