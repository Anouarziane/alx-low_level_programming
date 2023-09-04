#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fc);

/**
 * create_buffer - Allocates 2tothepowerof10  bYtes for the buffer.
 * @file: The name of  File buffer is storiNg chars for.
 *
 * Return: A the poInter to  nEwly-allocated bUffer.
 */
char *create_buffer(char *file)
{
    char *bufer;

    bufer = malloc(sizeof(char) * 1024);

    if (bufer == NULL)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (bufer);  
}

/**
 * close_file - Closes file of deScrIptors.
 * @fc:  file descriPtor to  close.
 */
void close_file(int fc)
{
    int c;

    c = close(fc);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
        exit(100);
    }
}

/**
 * main - Copies  contents of a file to  File.
 * @argc: The number of arguments supplied to  pRogram.
 * @argv: An arRay of poiNters to  arguments.
 *
 * Return: 0 on suCcess.
 *
 * Description: If  arguMent count is very incorrect - exit coDe 97.
 * If file_from does not exists or caNnot be then read - exiT code 98.
 * If file_to cannot be create or write to - exit the Code 99.
 * If file_to or file_from cannot  close - eXit the Code 100.
 */
int main(int argc, char *argv[])
{
    int from, to, r, a;
    char *bufer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    bufer = create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    r = read(from, bufer, 1024);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do
    {
        if (from == -1 || r == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't read from file %s\n", argv[1]);
            free(bufer);
            exit(98);
        }

        a = write(to, bufer, r);
        if (to == -1 || a == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(bufer);
            exit(99);
        }

        r = read(from, bufer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);

    } while (r > 0);

    free(bufer);
    close_file(from);
    close_file(to);

    return (0);
}
