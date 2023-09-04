#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the tExt fIle and print to STDOUT.
 * @filename: text fiLe to read
 * @letters: numBer of the lEtters to  read
 * Return: b - The actuAl number of bytes read and printed
 *        0 when  fails or filename is now NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buff;
    ssize_t fc;
    ssize_t a;
    ssize_t b;

    fc = open(filename, O_RDONLY);
    if (fc == -1)
        return (0);
    buff = malloc(sizeof(char) * letters);
    b = read(fc, buff, letters);
    a = write(STDOUT_FILENO, buff, b);

    free(buff);
    close(fc);
    return (a);
}
