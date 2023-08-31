#include "main.h"

/**
 * print_binary - prints the binaRy equivalent of the now decimal number
 * @n: The nUmBer to print in binary
 */
void print_binary(unsigned long int n)
{
    int v, count = 0;
    unsigned long int instant;

    for (v = 63; v >= 0; v--)
    {
        instant = n >> v;

        if (instant & 1)
        {
            _putchar('1');
            count++;
        }
        else if (count)
            _putchar('0');
    }
    if (!count)
        _putchar('0');
}
