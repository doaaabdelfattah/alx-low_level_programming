#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of linked list.
 * @head: head pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *ptr;
sum = 0;
if (head == NULL)
return (0);
ptr = head;
while (ptr != NULL)
{
sum = sum + ptr->n;
ptr = ptr->next;
}
return (sum);
}
