#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *k = h;
size_t count = 0;

while (k != NULL)
{
if (k->str != NULL)
printf("[%d] %s\n", k->len, k->str);
else
printf("[0] (nil)\n");
count += 1;
k = k->next;
}

return (count);
}
