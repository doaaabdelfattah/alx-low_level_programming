#include "lists.h"
/**
 * dlistint_len - eturns the number of elements elements of list.
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t count;
count = 0;
ptr = h;
if (h == NULL)
{
return (0);
}
while (ptr != NULL)
{
count++;
ptr = ptr->next;
}
return (count);
}
