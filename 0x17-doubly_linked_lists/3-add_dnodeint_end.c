#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to the head
 * @n: data
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *ptr;
/* Create new node */
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

ptr = *head;
/* Check if the list is empty */
if (ptr == NULL)
{
/* If the list is empty, the new node becomes the head*/
*head = new_node;
return (new_node);
}
/* Reach the end of list */
while (ptr->next != NULL)
{
ptr = ptr->next;
}
/* Connect the Nodes */
ptr->next = new_node;
new_node->prev = ptr;
return (new_node);
}
