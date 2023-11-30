#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 1 if succeed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
hash_node_t *tmp;
int index;

index = key_index((unsigned char *)key, ht->size);
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->value = strdup(value);
new_node->key = strdup(key);

/* If No collision */
if (ht->array[index] == NULL)
{
ht->array[index] = new_node;
new_node->next = NULL;
}
/* In case of Collision, add at the beginning */
else
{
tmp = ht->array[index];
ht->array[index] = new_node;
new_node->next = tmp;

/* Free the memory of the previous node */
free(tmp->key);
free(tmp->value);
free(tmp);
}
return (1);
}
