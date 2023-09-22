#include "lists.h"
/**
 *free_list - free list
 @head: head
 */
void free_list(list_t *head)
{
list_t *tmp;
tmp = head;
while (tmp != NULL)
{
tmp = tmp->next;
free(head);
head = tmp;
}
}
