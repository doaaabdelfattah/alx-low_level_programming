#include "lists.h"
/**
 * add_nodeint - add new node at the beginning
 * @head: pointer to head pointer
 * @n: integer
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/*if (*head == NULL)
{
*head = new_node;
return (new_node);
}
*/
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
