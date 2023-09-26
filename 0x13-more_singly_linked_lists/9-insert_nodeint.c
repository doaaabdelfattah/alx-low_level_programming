#include "lists.h"
/**
 * insert_nodeint_at_index - insert mode at index
 * @head: pointer to head pointer
 * @idx: index
 * @n: data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tmp, *prev;
unsigned int i;
if (*head == NULL)
	return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;

tmp = prev = *head;
for (i = 0; i < idx && tmp != NULL; i++)
{
	prev = tmp;
	tmp = tmp->next;
}
if (i < idx || tmp == NULL)
{
	free(new_node);
	return (NULL);
}
prev->next = new_node;
new_node->next = tmp;
return (new_node);
}
