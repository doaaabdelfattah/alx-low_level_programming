#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer
 * @index
 * Return: 1 if succeed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
linkint_t *tmp, *prev;
