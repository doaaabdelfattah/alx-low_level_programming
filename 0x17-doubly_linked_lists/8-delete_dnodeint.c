#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: index
 * Return: 1 if succeed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr;
unsigned int i;
if (*head == NULL)
return (-1);


if (index == 0)
{
ptr = *head;
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(ptr);
return (1);
}
else
{
ptr = *head;
/* Iterate through nodes */
for (i = 1; i < index && ptr != NULL; i++)
ptr = ptr->next;

/* Link nodes */
ptr->prev->next = ptr->next;
ptr->next->prev = ptr->prev;

free(ptr);
return (1);
}
return (-1);
}
