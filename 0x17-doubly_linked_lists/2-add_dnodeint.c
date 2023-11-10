#include "lists.h"
/**
 * add_dnodeint - add node at the beginning
 * @head: pointer to the head
 * @n: data
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/* Create new node */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* Connect both sides */
	new_node->next = *head;
	new_node->prev = NULL;
	/* checks if there was an existing head */
	/* update the previous pointer of first old node */
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
