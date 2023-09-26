#include "lists.h"
/**
 * pop_listint - delete the head of the node
 * @head: pointer to head pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;
if (*head == NULL)
	return (0);
tmp = *head;
data = (*head)->n;
*head = (*head)->next;
free(tmp);
return (data);
}
