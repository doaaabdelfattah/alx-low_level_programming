#include "lists.h"
/**
 * listint_len - num of elemnets
 * @h: head of linked list
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
size_t count;
if (h == NULL)
	return (0);
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
