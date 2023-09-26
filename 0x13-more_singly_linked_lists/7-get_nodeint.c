#include "lists.h"
/**
 * get_nodeint_at_index - return the address of nth
 * @head: head of the list
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i;
if (head == NULL)
	return (NULL);
tmp = head;
for (i = 0; i < index && tmp != NULL; i++)
{
tmp = tmp->next;
}
if (i < index || tmp == NULL)
	return (NULL);
return (tmp);
}
