#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
    const list_t *k = h;
    size_t count = 0;

    while (k != NULL)
    {
        count += 1;
        k = k->next;
    }

    return count;
}
