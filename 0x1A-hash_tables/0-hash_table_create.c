#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of array
 * Return: pointer to a newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table_ptr;
unsigned long int i;
if (size <= 0)
return (NULL);

table_ptr = (hash_table_t *)malloc(sizeof(hash_table_t));
if (table_ptr == NULL)
{
return (NULL);
}
table_ptr->size = size;
table_ptr->array = malloc(sizeof(hash_node_t *) * size);
if (table_ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
table_ptr->array[i] = NULL;
}
return (table_ptr);
}
