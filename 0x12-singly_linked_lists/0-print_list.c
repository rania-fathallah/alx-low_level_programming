#include <stdio.h>
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    int num = 0;

    while (h)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("%s, %d\n", h->str, h->len);
        num++;
        h = h->next;
    }

    return (num);
}
