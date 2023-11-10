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
	/* Check if list empty */
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
	}
	else
	{
		ptr = *head;
		/* Iterate through nodes */
		for (i = 0; i < index; i++)
		{
			/* Indicate failure for an index out of bounds */
			if (ptr == NULL)
				return (-1);
			ptr = ptr->next;
		}
		/* Link nodes */
		if (ptr->next != NULL)
			ptr->prev->next = ptr->next;
		if (ptr->prev != NULL)
			ptr->next->prev = ptr->prev;
		else
			*head = ptr->next;
	}

	free(ptr);
	return (1);
}
