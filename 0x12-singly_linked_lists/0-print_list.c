#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    const list_t *p;
    size_t num;
    p=h;
    num=0;

    while (p!=NULL)
    {
        if (p->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %sn", p->len, p->str);
        num++;
        p = p->next;
    }

    return (num);
}
