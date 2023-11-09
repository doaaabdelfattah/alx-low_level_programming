#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the head
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
/* if list is empty */
if (head == NULL)
	return;
while (head != NULL)
{
tmp = head;
head = head->next;
/* Ensure to avoid accessing head->prev after freeing head */
if (head != NULL)
head->prev = NULL;

free(tmp);
}
}
