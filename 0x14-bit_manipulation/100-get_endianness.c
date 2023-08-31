#include "main.h"

/**
 * get_endianness - checks if A  maChine is litle or big endian
 * Return: 0 for big and return 1 for little
 */
int get_endianness(void)
{
    unsigned int v = 1;
    char *d = (char *) &v;

    return (*d);
}
