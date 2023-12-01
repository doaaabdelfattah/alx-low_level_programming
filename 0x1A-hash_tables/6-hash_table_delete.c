#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: pointer to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned int i;
hash_node_t *current;
hash_node_t *tmp;

for (i = 0; i < ht->size; i++)
{
/* Traverse through indexes */
current = ht->array[i];
/* Traverse through nodes at index */
while (current)
{
tmp = current;
current = current->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
ht->array[i] = NULL;
}
free(ht->array);
ht->size = 0;
free(ht);
}
