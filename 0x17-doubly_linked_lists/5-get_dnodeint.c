#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the node
 * @index: index of the node
 * Return: pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *ptr;
unsigned int i;
if (head == NULL)
return (NULL);
ptr = head;
for (i = 0; i < index; i++)
{
ptr = ptr->next;
}
return (ptr);
}
