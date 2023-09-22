#include "lists.h"
/**
* list_len - print all element
* @h: head pointer
* Return: number of element
*/
size_t list_len(const list_t *h)
{
int count;
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
