#include "lists.h"
/**
 *free_list - free list
 *@head: head
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
