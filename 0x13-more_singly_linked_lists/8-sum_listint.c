#include "lists.h"
/**
 * sum_listint - return the sum of all data
 * @head: head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *tmp;
if (head == NULL)
	return (0);
tmp = head;
sum = 0;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
