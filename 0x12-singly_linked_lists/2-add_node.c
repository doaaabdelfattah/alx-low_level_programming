#include "lists.h"
/**
 * add_node - add new node
 * @head: pointer to pointer
 * @str: string to be added
 * Return: address to the element addes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *string;
string = strdup(str);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
else
{
new_node->str = string;
new_node->len = strlen(str);

if (head == NULL)
*head = new_node;
else
{
new_node->next = *head;
*head = new_node;
}
}
return (new_node);
}

