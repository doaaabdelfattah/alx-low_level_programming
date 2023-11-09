#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head pointer
 * @idx: index
 * @n: integer
 * Return: pointer to new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *ptr;
unsigned int i;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
else
{
/* Create new node */
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

ptr = *h;
/* Iterate through nodes */
for (i = 1; i < idx && ptr != NULL; i++)
ptr = ptr->next;
/* Check if the index is out of bounds */
if (ptr == NULL)
{
free(new_node);
return (NULL);
}
if (ptr->next == NULL)
return (add_dnodeint_end(h, n));
/* Fill the new node with both addressess (Prev & next)*/
new_node->prev = ptr;
new_node->next = ptr->next;
/* Update the old nodes: 1) the left */
ptr->next = new_node;
/* Update the old nodes: 2) the right */
new_node->next->prev = new_node;
return (new_node);
}
return (NULL);
}
