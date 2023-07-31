#include "main.h"

/**
 *  * _memcpy - a function that copies memory area
 *   * @dest: memory where data is copied
 *    * @src: memory where data is read from
 *     * @n: number of bytes to copy
 *      *
 *       * Return: pointer to the destination memory
 *        */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int r;

			for (r = 0; r < n; r++)
					{
								dest[r] = src[r];
									}

				return dest;
}
