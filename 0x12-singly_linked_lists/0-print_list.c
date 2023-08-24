#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length needs to be checked 
 *
 * Return: The integer length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    if (!s)
        return 0;

    while (*s++)
        len++;

    return len;
}

/**
 * print_list - prints linked list
 * @h: pointer to the first node
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
        h = h->next;
        count++;
    }

    return count;
}
