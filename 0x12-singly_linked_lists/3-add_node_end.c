#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: pointer to head
 * @str: data
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr, *tmp;
char *new_string;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
	return (NULL);

new_string = strdup(str);
if (new_string == NULL)
{
free(tmp);
return (NULL);
}

tmp->str = new_string;
tmp->next = NULL;
tmp->len = strlen(str);

ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = tmp;
return (tmp);
}
