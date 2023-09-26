#include "lists.h"
/**
 * print_listint - print all elements
 * @h: head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);
count = 0;
while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
