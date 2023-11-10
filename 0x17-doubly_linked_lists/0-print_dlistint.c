#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of list.
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count;

	count = 0;
	ptr = h;
	if (h == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
