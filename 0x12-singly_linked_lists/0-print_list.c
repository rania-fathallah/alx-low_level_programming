#include <stdio.h>
#include "main.h"
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t num = 0;

    while (h)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] (%s)\n", h->len, h->str);
        num++;
        h = h->next;
    }

    return (num);
}

