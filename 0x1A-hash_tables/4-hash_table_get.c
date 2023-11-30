#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: key
 * Return: value
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
hash_node_t *node;
index = key_index(key, ht->size);
node = ht->array[index];

if (node == NULL)
return (NULL);
else
{
    if (strcmp(node->key, key) == 0)
        return (node->value);
}
}